//Projecto Ex5
/*Utilize a série apresentada abaixo na realização de um programa que calcula
 um aproximado de π, lendo para tal do standard input (teclado) o número n de 
 termos da série, entre 20 e 100. O cálculo do valor de π é determinado ao fim 
 das n iterações. Escreva esse valor no standard output (terminal).
Nota: na resolução desta questão não pode usar funções da biblioteca de C*/

#include <stdio.h>

int main()
{
	
	int n, i;
	double pi = 0, k;
	
	printf("insira o numero de iterações, entre 20 e 100: ");
	scanf("%d", &n);
	
	for (i = 0, k = 1; i < n; i++, k++)// ciclo de iterações
	{
		if(i % 2 == 0)
			pi += (4/(2*k-1)); //k em vez de i para ser divisão de double
		
		else
			pi += (-4/(2*k-1)); //impares é negativo
	}
	
	printf("\n %f", pi); 
	return 0;
}
 
