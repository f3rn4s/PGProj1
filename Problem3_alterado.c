//Projecto Ex3
/*Realize o programa que calcula se duas rectas são ou não paralelas, 
apresentando no standard output (terminal) essa informação. Além disso,
 para o caso das rectas não serem paralelas, deve indicar o ponto de 
 intersecção x,y, no plano XY. Para tal deve ler do standard input (teclado) os
pontos P1, P2, P3 e P4, correspondendo à leitura de oito valores inteiros,
respectivamente (x1,y1), (x2,y2), (x3,y3) e (x4,y4).*/

//Bibliotecas
#include <stdio.h>

//main function
int main()
{
	//declaracao de variaveis
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
	int escolha;

    do {
    	//Mostra Menu
    	printf("\n\t0 - Abandonar Aplicacao ");
    	printf("\n\t1 - Admissao de Dados");
    	printf("\n\t2 - Resultado");
    	
    	//Escolha uma opcao
    	scanf("%d",& escolha);
    	//Realiza a opera��o relativa a escolha
    	switch(escolha ) {
    	case 0: //Abandonar aplicacao
		        break;
					
    	case 1: //Admissao de dados
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
				
		case 2: //Resultados


			aux = x2-x1;
			aux2 = x4-x3;

			// Foi necessario dar cast numa das variaveis das coordenadas para permitir valores decimais
			if ( aux != 0 )
			{				
				m_recta1 = ((float)y2-y1)/(aux);
			}
			else 	// Para levantar inderterminacao 1/0 forca-se a vari�vel a 0
			{
				m_recta1 = 0;
			}	
			if( aux2 != 0)
			{
				m_recta2 = ((float)y4-y3)/(aux2);
			}
			else	
			{
				m_recta2 = 0;
			}

			if((m_recta2 - m_recta1) == 0)
			{
				printf("Sao paralelas.");
			}
			else
			{
			//equacao da recta y = m.x + b
			//b = y - m.x

				float b_recta1 = (y1 - (m_recta1 * x1));
				float b_recta2 = y3 - (m_recta2 * x3);

				//Calculo de pontos de interseção

				/* Quando y = 0, a equacao da recta para descobrir X e x = b/m, como queremos o ponto de intersecao das duas rectas
				subtrai-se as duas ordenadas na origem (b2-b1) e divide-se pela diferen�a dos seus declives*/ 

				float pontoX = (b_recta2- b_recta1) / (m_recta1 - m_recta2);

				// substituicao directa do X na equacao da recta, qualquer uma delas serve

				float pontoY = (m_recta1 * pontoX) + b_recta1;

				//float pontoY2 = m_recta2 * pontoX + b_recta2;

				printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY );
				//printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY2 );
			}
		    break;
				
		default : //outros valores diferentes do anteriores	
			break;	
				 			
		}//end switch
    	
	   }while(escolha > 0 ); //enquanto escolha for maior que zero   
	return 0;
}//end main
