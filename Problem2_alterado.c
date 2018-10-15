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
					int validacao1 = 0;
					printf("Ano da data de nascimento:\n");
					scanf("%d",&anoNascimento);
					printf("Mes da data de nascimento:\n");
					scanf("%d",&mesNascimento);
					printf("Dia da data de nascimento:\n");
					scanf("%d",&diaNascimento);
					if( anoNascimento < 1900 || 
					    anoNascimento > 2018 || 
						anoCorrente   > 2018 || 
						anoCorrente   < 1900)
						 {
					printf("ERRO!!! Insira os anos entre 1900 e 2018");
					validacao1 = 1;
					}
					if( mesNascimento < 1  || 
					    mesNascimento > 12 || 
						mesCorrente   < 1  ||
						 mesCorrente > 12) {
					printf("ERRO!!! Insira os meses entre 1 e 12");
					validacao1 = 1;
				}while (validacao1)		
		          break;
		case   2: //Admitir a data actual
					printf("Ano da data corrente:\n");
					scanf("%d",&anoCorrente);
					printf("Mes da data corrente:\n");
					scanf("%d",&mesCorrente);
					printf("Dia da data corrente:\n");
					scanf("%d",&diaCorrente);		
		          break;
		case   3: 
					//Validação dos dados introduzidos

					if( anoNascimento < 1900 || 
					    anoNascimento > 2018 || 
						anoCorrente   > 2018 || 
						anoCorrente   < 1900) {
					printf("ERRO!!! Insira os anos entre 1900 e 2018");
					}
					if( mesNascimento < 1  || 
					    mesNascimento > 12 || 
						mesCorrente   < 1  ||
						 mesCorrente > 12) {
					printf("ERRO!!! Insira os meses entre 1 e 12");
					}
					//Calcular Anos meses dias

					int anodif = anoCorrente - anoNascimento;
   					int mesdif = mesCorrente - mesNascimento;
   					int diadif = diaCorrente - diaNascimento;

   					printf("%s\n", );
					

		          break;  
		default : // Outros valores diferenes dos anteriores
		          break;		
		}//end switch
		
	   }while(escolha>0);//enquanto escolha for maior que zero
	return 0;
}//end main
