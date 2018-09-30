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

int main()
{
	//Declaração de variáveis

	float pontoAX = 0;
	float pontoAY = 0;
	float pontoBX = 0;
	float pontoBY = 0;
	float pontoCX = 0;
	float pontoCY = 0;
	float distanciaAB=0;
	float distanciaAC=0;
	float distanciaBC=0;
	float perimetro = 0;

	//Leitura de valores

	printf("Insira a coordenada x do Ponto A:\n");
	scanf("%f",&pontoAX);
	printf("Insira a coordenada y do Ponto A:\n");
	scanf("%f",&pontoAY);
	printf("Insira a coordenada x do Ponto B:\n");
	scanf("%f",&pontoBX);
	printf("Insira a coordenada y do Ponto B:\n");
	scanf("%f",&pontoBY);
	printf("Insira a coordenada x do Ponto C:\n");
	scanf("%f",&pontoCX);
	printf("Insira a coordenada y do Ponto C:\n");
	scanf("%f",&pontoCY);

	//Cálculo das distâncias entre os pontos e perimetro


	distanciaAB = sqrt(pow((pontoAX-pontoBX), 2) + pow((pontoAY-pontoBY), 2));

	distanciaAC = sqrt(pow((pontoAX-pontoCX), 2) + pow((pontoAY-pontoCY), 2));

	distanciaBC = sqrt(pow((pontoBX-pontoCX), 2) + pow((pontoBY-pontoCY), 2));

	perimetro = distanciaAB + distanciaAC + distanciaBC;

	//Resultados

	printf("Perimetro: %2f\n",perimetro);
	printf("Perimetro: %.2f\n",perimetro);

	return 0;
}