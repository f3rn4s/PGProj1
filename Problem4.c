//Projecto Ex4
/* Elabore o programa que lê do standard input (teclado) uma sequência de dois ou mais inteiros
que termina com um valor não numérico (uma qualquer letra), para calcular se todos os inteiros
lidos são iguais ou se estão em ordem crescente ou se estão em ordem decrescente ou se não
estão em nenhuma ordem, escrevendo no standard output (terminal), respectivamente “todos
iguais”, ”Em ordem crescente”, ”Em ordem decrescente”, ”Em Ordem Arbitrária”.*/

#include <stdio.h>

int main()
{
	int num1, num2, temp;
	printf("introduza o 1º numero: (letra para sair) ");
	//scanf("%d", &num1);
	if(scanf("%d", &num1) == 0) 
		return 0;
	temp = num1;
	int alb = 0; //variavel de controlo para arbitrarios
	int num = 0; //variavel de contagem dos numeros introduzidos
	do// a partir do segundo começa a comparar 
	{
		printf("introduza outro numero: (letra para sair)");
		
		if(scanf("%d", &num2) == 0) 
			break;
		
		num++;
	
		if(temp<num2)// crescente
			alb += 2; //dobro dos numeros introduzidos
		
		if(temp>num2)//decrescente
			alb += 3; //triplo dos numeros introduzidos
		
		if(temp==num2) //igualdade
			alb += 5; //*quintuplo dos numeros introduzidos
		
	}while(1);	
	
	// colocar o resultado
	if(alb == num*2) // igual ao dobro de num
		printf("\nEm ordem crescente");
	else if(alb == num*3) //será igual ao triplo de num
		printf("\nEm ordem decrescente");
	else if(alb == num*5) //será igual a 5x num
		printf("\ntodos iguais");
	else //se for outro valor, então ocorreu mais do k uma multiplicação
		printf("\nEm ordem arbitraria");
		
	return 0;
}