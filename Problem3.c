/*
Programação 1

Grupo : K
Numero   Nome
         Samir Santo
35164    Fernando Duarte
10065    Luis Silva  

Projecto
Ex3
Realize o programa que calcula se duas rectas sÃ£o ou nÃ£o paralelas, 
apresentando no standard output (terminal) essa informaÃ§Ã£o. AlÃ©m disso,
para o caso das rectas nÃ£o serem paralelas, deve indicar o ponto de 
intersecÃ§Ã£o x,y, no plano XY. Para tal deve ler do standard input (teclado) os
pontos P1, P2, P3 e P4, correspondendo Ã  leitura de oito valores inteiros,
respectivamente (x1,y1), (x2,y2), (x3,y3) e (x4,y4).*/

//Bibliotecas
#include <stdio.h>

//main function
int main()
{
	//Declaracao de variaveis
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;
	int x4 = 0;
	int y4 = 0;
	float m_recta1 = 0;
	float m_recta2 = 0;
	int aux = 0;
	int aux2 = 0;
	int aux3 = 0;
	int aux4 = 0;
	int escolha;

    do {
    	//Mostra Menu
    	printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
    	printf("\n\t|           Menu             |");        	
    	printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");  	
    	printf("\n\t|                            |");         	
    	printf("\n\t|  0 - Abandonar Aplicacao   |");
    	printf("\n\t|  1 - Admissao de Dados     |");
    	printf("\n\t|  2 - Resultado             |");
   	    printf("\n\t|                            |");      	
    	printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
		printf("\n\t          Escolha : ") ; 	
    	
    	//Escolha uma opcao
    	scanf("%d",& escolha);
    	//Realiza a operação relativa a escolha
    	switch(escolha ) {
    	case 0: //Abandonar aplicacao
		        break;
					
    	case 1: 
				//Leitura de valores

				printf("Insira as coordenadas X e Y do ponto P1:");
				scanf("%d%d", &x1,&y1);
				printf("Insira as coordenadas X e Y do ponto P2:");
				scanf("%d%d", &x2,&y2);
				printf("Insira as coordenadas X e Y do ponto P3:");
				scanf("%d%d", &x3,&y3);
				printf("Insira as coordenadas X e Y do ponto P4:");
				scanf("%d%d", &x4,&y4);
    	
		        break;
				
		case 2: //Calculos, Validacoes e Resultados


			aux = x2-x1;
			aux2 = x4-x3;
			aux3 = y2-y1;
			aux4 = y4-y3;

			// Calculo dos declives
			if(aux != 0 || aux2 != 0){
				m_recta1 = ((float)y2-y1)/(aux);
				m_recta2 = ((float)y4-y3)/(aux2);
			}
			else // Para levantar as indeterminações para quando as diferentças dos pontos nas coordenadas x são iguais a zero
			{
				if (aux == 0)
				{
					m_recta1 = 0;	// para x2 - x1 == 0
				}
				if(aux2 == 0){
					m_recta2 = 0;	// para x4 - x3 == 0
				}
				
			}
			
			if((m_recta2 - m_recta1) == 0) // Quando os declives são iguais são paralelas
			{

				printf("Sao paralelas."); 
				break;
			}
			if (aux == 0 ) // casos para primeira ser uma recta vertical e outra recta ser horizontal ou com declive diferente de 0
			{
				m_recta1 = 0;
				float b_recta2 = ((float)y3 - (m_recta2 * x3));

				//Calculo de pontos de interseção

				/* Quando y = 0, a equacao da recta para descobrir X e x = b/m, como queremos o ponto de intersecao das duas rectas
				subtrai-se as duas ordenadas na origem (b2-b1) e divide-se pela diferença dos seus declives*/ 

				float pontoX = x1;

				// substituicao directa do X na equacao da recta, qualquer uma delas serve

				float pontoY = (m_recta1 * pontoX) + b_recta2;

				//float pontoY2 = m_recta2 * pontoX + b_recta2;
				if (aux3 == 0)
				{
					pontoY = y2;
				}
				if (aux4 == 0)
				{
					pontoY = y4;
				}
				printf("1");
				printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY );
				break;
			}
			else if (aux2 == 0) //para quando a primeira é horizontal ou com declive diferente de 0
			{
				m_recta2 = 0;
				float b_recta1 = (y1 - (m_recta1 * x1));

				//Calculo de pontos de interseção

				/* Quando y = 0, a equacao da recta para descobrir X e x = b/m, como queremos o ponto de intersecao das duas rectas
				subtrai-se as duas ordenadas na origem (b2-b1) e divide-se pela diferença dos seus declives*/ 

				float pontoX = x3;

				// substituicao directa do X na equacao da recta, qualquer uma delas serve

				float pontoY = (m_recta1 * pontoX) + b_recta1;

				//float pontoY2 = m_recta2 * pontoX + b_recta2;
				if (aux3 == 0)
				{
					pontoY = y2;
				}
				if (aux4 == 0)
				{
					pontoY = y4;
				}
				printf("2");
				printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY );
				break;
			}
			else // quando as rectas têm declives diferentes de zero
			{
			
				float b_recta1 = (y1 - (m_recta1 * x1));
				float b_recta2 = (y3 - (m_recta2 * x3));

				//Calculo de pontos de interseÃ§Ã£o

				/* Quando y = 0, a equacao da recta para descobrir X e x = b/m, como queremos o ponto de intersecao das duas rectas
				subtrai-se as duas ordenadas na origem (b2-b1) e divide-se pela diferença dos seus declives*/ 

				float pontoX = (b_recta2- b_recta1) / (m_recta1 - m_recta2);

				// substituicao directa do X na equacao da recta, qualquer uma delas serve

				float pontoY = (m_recta1 * pontoX) + b_recta1;

				if (aux3 == 0)
				{
					pontoY = y2;
				}
				if (aux4 == 0)
				{
					pontoY = y4;
				}
				printf("3");
				printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY );
				break;
			}
		    break;
				
		default : //outros valores diferentes do anteriores	
			break;	
				 			
		}//end switch
    	
	   }while(escolha > 0 ); //enquanto escolha for maior que zero   
	return 0;
}//end main
