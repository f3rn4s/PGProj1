<<<<<<< HEAD
=======
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

	//Declaração de variáveis
	int anoNascimento = 0;
	int mesNascimento = 0;
	int diaNascimento = 0;
	int anoCorrente = 0;
	int mesCorrente = 0;
	int diaCorrente = 0;
    int escolha = 0;
    int maxdsma = 0;
    int anodif = 0;
    int mesdif = 0;
    int diadif = 0;
    int validacao1 = 0;


//main Function
int main()
{
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
					printf("Ano da data de nascimento:\n");
					scanf("%d",&anoNascimento);
					printf("Mes da data de nascimento:\n");
					scanf("%d",&mesNascimento);
					printf("Dia da data de nascimento:\n");
					scanf("%d",&diaNascimento);
					if( anoNascimento < 1900 || 
					    anoNascimento > 2018 )
					{
						printf("ERRO!!! Insira os anos entre 1900 e 2018");
						validacao1 = 1;
					}
					if( mesNascimento < 1  || 
					    mesNascimento > 12) 
					{
						printf("ERRO!!! Insira os meses entre 1 e 12");
						validacao1 = 1;
					}
					switch (mesNascimento) {
			
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
					default: validacao1 = 1;
							printf("ERRO!!! Insira os dias entre 1 e 28,29,30,31 consoante alguns casos.\n");
							break;
					}
				}while (validacao1);	
		        break;
			case   2: //Admitir a data actual
				do
				{
					validacao1 = 0;
					printf("Ano da data de corrente:\n");
					scanf("%d",&anoCorrente);
					printf("Mes da data de corrente:\n");
					scanf("%d",&mesCorrente);
					printf("Dia da data de corrente:\n");
					scanf("%d",&diaCorrente);

					if( anoCorrente   > 2018 || 
						anoCorrente   < 1900)
					{
						printf("ERRO!!! Insira os anos entre 1900 e 2018");
						validacao1 = 1;
					}
					if( mesCorrente   < 1  ||
						mesCorrente > 12) 
					{
						printf("ERRO!!! Insira os meses entre 1 e 12");
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
						maxdsma = 31;
						break;	
					
					case 4:
					case 6:
					case 9:
					case 11: 
						maxdsma = 30;
						break;	
					
					case 2:  maxdsma = 28+ ((anoCorrente %4 == 0 && (anoCorrente % 100 !=0 || anoCorrente % 400 == 0))? 1 : 0); break;
					default: validacao1 = 1;
						printf("ERRO!!! Insira os dias entre 1 e 28,29,30,31 consoante alguns casos.\n");
						break;
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
    
    				//bloco adicional para as insuficiencias do 'calculo da diferen�a'  
				    if(mesdif<0)
				    {
				        anodif--;//subtrai-se 1 ao ano
				        mesdif += 12;//e somar o valor negativo a 12
				    }   
				    
				    // para dias negativos
				    if(diadif<0)
				    { 
				        if(mesdif == 0) 
				        {
				            anodif--;
				            mesdif = 11;
				            diadif = diaNascimento + diadif;
				        }
				        else
				        {
				            mesdif--;
				            diadif = diaNascimento + diadif;
				        }
				    }
				     //colocar o resultado
				    printf("tem %d anos, %d meses e %d dias", anodif, mesdif, diadif);
					break;  
			default : // Outros valores diferenes dos anteriores
		          break;		
		}//end switch
		
	   }while(escolha>0);//enquanto escolha for maior que zero
	return 0;
}
>>>>>>> a4d38b3e9230237a56f58768f9f1e35e33c2c95e
