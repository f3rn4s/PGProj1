//Projecto Ex5
/*Utilize a série apresentada abaixo na realização de um programa que calcula
 um aproximado de π, lendo para tal do standard input (teclado) o número n de 
 termos da série, entre 20 e 100. O cálculo do valor de π é determinado ao fim 
 das n iterações. Escreva esse valor no standard output (terminal).
Nota: na resolução desta questão não pode usar funções da biblioteca de C*/

#include <stdio.h>

int main()
{
	//
	int n=0;
	double pi = 0.0;

	for (int i = 0, int k = 1; i < n; i++, k++)
	{
		if ( k % 2 == 1)
		{
			pi += (double)4*(1/((2*k)-1);
		}
		else(
		{
			pi += (double)4*(-1/((2*k)-1);
		}
	}
	return 0;
}
