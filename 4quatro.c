#include <stdio.h>
// falta acabar os arbitrarios
int main ()
{
	int num1, num2, temp, ordem;
	printf("introduza o 1º numero: (letra para sair) ");
	//scanf("%d", &num1);
	if(scanf("%d", &num1)) 
		return 0;
	temp = num1;
	do// a partir do segundo começa a comparar 
	{
		printf("introduza outro numero: (zero!!! sair)");
		
		if(scanf("%d", &num2) 
			break;
		
		if(temp<num2)// crescente
			ordem = 1;
		if(temp>num2)//decrescente
			ordem = 2;
		if(temp==num2) //igualdade
			ordem = 3; // falta uma variavel para os numeros arbitrarios
	}while(1);	
	
	// no final coloca o resultado
	switch(ordem)
	{
		case 1:
			printf("\ncrescente");
			break;
		case 2:
			printf("\ndecrescente");
			break;
		case 3:
			printf("\nigualdade");
			break;
		default:
			printf("\nordem arbitraria");
	}
	return 0;
	
}
