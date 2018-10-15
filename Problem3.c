//Projecto Ex3
/*Realize o programa que calcula se duas rectas são ou não paralelas, 
apresentando no standard output (terminal) essa informação. Além disso,
 para o caso das rectas não serem paralelas, deve indicar o ponto de 
 intersecção x,y, no plano XY. Para tal deve ler do standard input (teclado) os
pontos P1, P2, P3 e P4, correspondendo à leitura de oito valores inteiros,
respectivamente (x1,y1), (x2,y2), (x3,y3) e (x4,y4).*/

#include <stdio.h>

int main()
{
	//declaração de variáveis
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

	//Leitura de valores

	
	printf("Insira as coordenadas X e Y do ponto P1:");
	scanf("%d%d", &x1,&y1);
	printf("Insira as coordenadas X e Y do ponto P2:");
	scanf("%d%d", &x2,&y2);
	printf("Insira as coordenadas X e Y do ponto P3:");
	scanf("%d%d", &x3,&y3);
	printf("Insira as coordenadas X e Y do ponto P4:");
	scanf("%d%d", &x4,&y4);

	// Foi necessário dar cast numa das variáveis das coordenadas para permitir valores decimais
	
	int aux = x2-x1;
	int aux2 = x4-x3;

	if ( aux != 0 )
	{				
		m_recta1 = ((float)y2-y1)/(aux);
	}
	else 	// Para levantar inderterminacao 1/0 forca-se a variável a 0
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

	printf("m_recta2: %f\n", m_recta2 );
	printf("m_recta1: %f\n", m_recta1 );

	if((m_recta2 - m_recta1) == 0)
	{
		printf("Sao paralelas.");
	}

	else{

		//equação da recta y = m.x + b
		//b = y - m.x

		float b_recta1 = (y1 - (m_recta1 * x1));
		float b_recta2 = (y3 - (m_recta2 * x3));

		 if (x1 == x2 && x3 == x4)
		 {
		 	printf("Sao paralelas.");
		 }
		//Calculo de pontos de interseção

		/* Quando y = 0, a equação da recta para descobrir X é x = b/m, como queremos o ponto de interseção das duas rectas
		subtrai-se as duas ordenadas na origem (b2-b1) e divide-se pela diferença dos seus declives*/ 

		 else
		 {
			float pontoX = (b_recta2- b_recta1) / (m_recta1 - m_recta2);

			// substituição directa do X na equação da recta, qualquer uma delas serve

			float pontoY = (m_recta1 * pontoX) + b_recta1;

			//float pontoY2 = m_recta2 * pontoX + b_recta2;

			printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY );
			//printf("Nao sao paralelas. O ponto de interseccao e:(%f) , (%f) \n", pontoX,pontoY2 );
		}
	}


	return 0;
}