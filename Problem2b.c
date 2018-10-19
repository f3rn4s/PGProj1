//Projecto Ex2
/*Faça um programa que apresenta a idade de alguém em termos de anos, meses e dias,
 dada a sua data de nascimento e a data corrente. As duas datas são lidas do standard
  input (teclado) no formato dia mês ano (três valores inteiros). O programa deve 
  verificar se as datas introduzidas são válidas e deve assinalar se a data de nascimento 
  é superior à data corrente. Os valores das datas devem obedecer às seguintes condições:
   o ano deverá estar entre 1900 e 2018, o mês entre 1 e 12 e o dia entre 1 e DiasMes, onde
    DiasMes corresponde ao número de dias do respetivo mês. Escreva no standard output (terminal) 
    a idade e, caso a data corrente seja de aniversário, deve adicionalmente escrever muitos parabéns.*/

#include <stdio.h>

	


//main Function
int main()
{
	//Declaracaoo de variaveis
	int anoNascimento = 0;
	int mesNascimento = 0;
	int diaNascimento = 0;
	int anoCorrente = 0;
	int mesCorrente = 0;
	int diaCorrente = 0;
    int escolha = 0;
    int maxdsma = 0;
    int maxdsma1 = 0;
    int anodif = 0;
    int mesdif = 0;
    int diadif = 0;
    int validacao1 = 0;
	//Fazer 
	do {
		//Mostra o menu da aplica��o
		printf("\n\t0 - Abandonar Aplicacao");
		printf("\n\t1 - Data de Nascimento");
		printf("\n\t2 - Data presente dia");
		printf("\n\t3 - Resultado (A,M,D)");
		printf("\n\t  Escolha : ");
		//Le a escolha do utilizador
		scanf("%d",&escolha);
		//Realiza o teste multipliplo 
		//testa o valor da variavel escolha
		// e conforme os valores dessa variavel 
		//vai realizar diferentes possibilidades
		switch(escolha) {

			case   0: //Abandonar aplicacao 
		         	break;
			case   1: //Admitir data Nascimento
				do
				{
					validacao1 = 0;
					printf("Insira a data de nascimento, no formato d m ano # # ####:\n");
					scanf("%d%d%d",&diaNascimento, &mesNascimento, &anoNascimento);
					
					if( anoNascimento < 1900 || 
					    anoNascimento > 2018 )
					{
						printf("\nERRO!!! Insira os anos entre 1900 e 2018");
						validacao1 = 1;
					}
					if( mesNascimento < 1  || 
					    mesNascimento > 12) 
					{
						printf("\nERRO!!! Insira os meses entre 1 e 12");
						validacao1 = 1;
					}
					switch (mesNascimento) 
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12: 
							maxdsma = 31;
						break;	
						case 4:
						case 6:
						case 9:
						case 11:
							maxdsma = 30;
							break;
						case 2: 
							maxdsma = 28+ ((anoNascimento %4 == 0 && (anoNascimento % 100 !=0 || anoNascimento % 400 == 0))? 1 : 0);
							break;
						default: 
							validacao1 = 1;
							
							break;
					}
					if(diaNascimento<1 || diaNascimento>maxdsma)
					{
						printf("\nERRO!!! Insira os dias entre 1 %d.\n", maxdsma);
						validacao1 = 1;
					}
				}while (validacao1);	
		        break;
			case   2: //Admitir e validar a data actual
				do
				{
					validacao1 = 0;
					printf("Insira a data corrente, no formato dia mes ano # # ####:\n");
					scanf("%d%d%d", &diaCorrente, &mesCorrente, &anoCorrente);
					
					if( anoCorrente   > 2018 || 
						anoCorrente   < 1900)
					{
						printf("\nERRO!!! Insira os anos entre 1900 e 2018");
						validacao1 = 1;
					}
					if( mesCorrente   < 1  ||
						mesCorrente > 12) 
					{
						printf("\nERRO!!! Insira os meses entre 1 e 12");
						validacao1 = 1;
					}
					switch (mesCorrente) {
			
						case 1:
						case 3:
						case 5:
						case 7:
						case 8:
						case 10:
						case 12: 
						maxdsma1 = 31;
							break;	
					
						case 4:
						case 6:
						case 9:
						case 11: 
						maxdsma1 = 30;
							break;	
					
						case 2:  maxdsma1 = 28 + ((anoCorrente %4 == 0 && (anoCorrente % 100 !=0 || anoCorrente % 400 == 0))? 1 : 0); break;
						default: 
							validacao1 = 1;
							break;
					}
					if(diaCorrente<1 || diaCorrente>maxdsma1)//validar os dias
					{
						printf("\nERRO!!! Insira os dias entre 1 %d.\n", maxdsma1);
						validacao1 = 1;
					}
					//valida��o nascimento antes ds corrente
					if(anoNascimento>=anoCorrente && mesNascimento >= mesCorrente && diaNascimento >= diaCorrente)
					{
						printf("\nERRO!!! a data de nascimento tem de anteceder a data atual!!!\n");
						validacao1 = 1;
					}
				}while (validacao1);	
		        break;		
		         break;
			case   3: 
					//Calcular Anos meses dias

					anodif = anoCorrente - anoNascimento;
   					mesdif = mesCorrente - mesNascimento;
   					diadif = diaCorrente - diaNascimento;
   					
   					 // caso seja dia de aniversario
    				if(mesdif == 0 && diadif == 0)
        				printf("\nMuitos parabens\n");
    
    				//bloco para finalizar o calculo da diferen�a
				    if(mesdif<0) //para ajustar a subtra��o dos meses
				    {
				        anodif--;//subtrai-se 1 ao ano
				        mesdif += 12;//e somar o valor negativo a 12
				    }   
				    
				    // para ajustar a subtra��o dos dias
				    if(diadif<0)
				    { 
				        if(mesdif == 0) 
				        {
				            anodif--;
				            mesdif = 11;
				            diadif = (maxdsma-1)- diadif; 
				        }
				        else
				        {
				            mesdif--;
				            diadif = (maxdsma-1) - diadif;
				        }
				    }
				     //colocar o resultado
				    printf("\ntem %d anos, %d meses e %d dias", anodif, mesdif, diadif);
					break;  
			default : // Outros valores diferenes dos anteriores
		          break;		
		}//end switch
		
	   }while(escolha>0);//enquanto escolha for maior que zero
	return 0;
}
