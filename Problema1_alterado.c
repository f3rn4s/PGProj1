//Projecto Ex1
/*O Sr Coimbra comprou um terreno triangular e pretende
 colocar uma cerca em torno no mesmo. O terreno está identificado
 por três pontos cartesianos (2D). Pretende-se que ajude o 
 Sr. Coimbra a determinar quantos metros de rede serão necessários
 para vedar o terreno. Elabore o programa que lê do standard input
 (teclado) 6 valores reais que representam três pontos,
  respetivamente (x1,y1), (x2,y2) e (x3,y3), e determina o
   perímetro do triângulo, escrevendo esse valor no 
   standard output (terminal). Pretende-se que o perímetro
    seja apresentado arredondado a duas casas decimais.*/

#include <stdio.h>
#include <math.h>

	//Declaracao de variaveis
	//Ponto A
	float pontoAX = 0.0f;
	float pontoAY = 0.0f;
	
	//Ponto B
	float pontoBX = 0.0f;
	float pontoBY = 0.0f;
	
	//Ponto C
	float pontoCX = 0.0f;
	float pontoCY = 0.0f;
	
	//Distancia AB
	float distanciaAB=0.0f;
	
	//Distancia AC
	float distanciaAC=0.0f;
	
	//Distancia BC
	float distanciaBC=0.0f;
	
	//Perimetro
	float perimetro = 0.0f;
	
    int escolha = 0;

int main()
{
	
	do {
		
		//Mostra o Menu
		printf("\n\t0 - Abandonar aplicacao");
		printf("\n\t1 - Admitir Coordenadas");
		printf("\n\t2 - Mostar Perimetro");
		printf("\n\t    Escolha :");
		
		//Admite a escolha
		scanf("%d",&escolha);
		
		switch(escolha) {
		case   0: //Abandonar 
		    break;
		case   1://admitir coordenadas
			//Leitura de valores

			printf("Insira as coordenadas X e Y do ponto A:");
			scanf("%d%d", &pontoAX,&pontoAY);
			printf("Insira as coordenadas X e Y do ponto B:");
			scanf("%d%d", &pontoBX,&pontoBY);
			printf("Insira as coordenadas X e Y do ponto C:");
			scanf("%d%d", &pontoCX,&pontoCY);
			break;
		          
		case   2://Mostar Perimetro
			//Calculo das distAncias entre os pontos e perimetro
			distanciaAB = sqrt(pow((pontoAX-pontoBX), 2) + pow((pontoAY-pontoBY), 2));
			distanciaAC = sqrt(pow((pontoAX-pontoCX), 2) + pow((pontoAY-pontoCY), 2));
			distanciaBC = sqrt(pow((pontoBX-pontoCX), 2) + pow((pontoBY-pontoCY), 2));
			perimetro = distanciaAB + distanciaAC + distanciaBC;

			//Resultados
			printf("Perimetro: %.2f\n",perimetro);

			break;
				  	
		default : 
			break;	
			
		}//switch
		
		
     	}while(escolha>0);
     	
     	return 0;
}//end main

