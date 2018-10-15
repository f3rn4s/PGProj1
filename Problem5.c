//Projecto Ex5
/*Utilize a série apresentada abaixo na realização de um programa que calcula
 um aproximado de π, lendo para tal do standard input (teclado) o número n de 
 termos da série, entre 20 e 100. O cálculo do valor de π é determinado ao fim 
 das n iterações. Escreva esse valor no standard output (terminal).
Nota: na resolução desta questão não pode usar funções da biblioteca de C*/

#include <stdio.h>

int main()
{
    
    //Declaracao de variaveis
    int n = 0;
    int k = 1;
    double pi = 0.0;
    int validacao;

    //Leitura de valores e validacao dos valores introduzidos

    do {
        validacao = 0;
        printf("Insira o numero de termos (minimo 20 e maximo 100):");
        scanf("%d", &n);

        if(n < 20 || n > 100)
        {
            printf("Insira um numero entre 20 e 100 !!!");
            validacao = 1;
        }

    } while (validacao);
    
    //Calculo do pi

    for (int i = 0; i < n; i++, k++)
    {

        if ( k % 2 == 1)    //potencias impares
        {
            pi += 4.0*(1.0/((2.0*k)-1.0));
        }
        else    //potencias pares
        {
            pi += 4.0*(-1.0/((2.0*k)-1.0));
        }
    }

    //Apresentacao de resultados

    printf("Pi = %lf \n", pi);
    
    return 0;
}