#include <stdio.h>

int main()
{
	int dia1, dia2, mes1, mes2, ano1, ano2, vald1, vald2, 
	diasmes1, diasmes2, diaf, mesf, anof;
		
	do //entrada e validação do ano de nascimento
	{
		vald1 = 0;
		printf("\ninsira a data de nascimento: ");
		scanf("%d%d%d", &dia1, &mes1, &ano1);
		if(ano1<1900 || ano1>2018)
		{
			printf("apenas anos entre 1900 e 2018\n");
			vald1 = 1;
		}
		if(mes1<1 || mes1>12) //validação do mes
		{
			printf("apenas entre 1 a 12 meses\n");
			vald1 = 1;
		}	
		
		if(mes1%2) // meses pares têm 31 dias
			diasmes1 = 31;
		else
			diasmes1 = 30; // meses impares têm 30 dias
		if(mes1 == 2 && (ano1%4 || ano1 == 1900 || ano1 == 2000)) 
			diasmes1 = 29;
		else if(mes1 == 2)
			diasmes1 = 28;
			
		if(dia1<1 || dia1>diasmes1) // validação do meses
		{
			printf("no %d mes há apenas entre 1 a %d dias\n", mes1, diasmes1);
			vald1 = 1;
		}
	}while(vald1);
	
	do //entrada e validação do ano atual
	{
		vald2 = 0;
		printf("insira a data de atual: ");
		scanf("%d%d%d", &dia2, &mes2, &ano2);
		if(ano2<1900 || ano2>2018)
		{
			printf("apenas anos entre 1900 e 2018\n");
			vald2 = 1;
		}
				if(mes2<1 || mes2>12)
		{
			printf("apenas entre 1 a 12 meses\n");
			vald1 = 1;
		}	
		
		if(mes2%2)
			diasmes2 = 31;
		else
			diasmes2 = 30;
		if(mes2 == 2 && (ano2%4 || ano2 == 1900 || ano2 == 2000)) 
			diasmes2 = 29;
		else if(mes2 == 2)
			diasmes2 = 28;
			
		if(dia2<1 || dia2>diasmes2)
		{
			printf("no %d mes há apenas entre 1 a %d dias\n", mes2, diasmes2);
			vald2 = 1;
		}
	}while(vald2);
	
	anof = ano2 - ano1;
	mesf = mes2 - mes1;
	diaf = dia2 - dia1;
	
	// para datas proximas, subtrai-se 1 ao mes/ano e
	// subtrai-se o valor negativo
	if(diaf<0)
	{ 
		mesf--;
		diaf = diasmes1 + diaf;
	}
	if(mesf<0)
	{
		anof--;
		mesf += 12 + mesf;
	}	
	printf("tem %d anos, %d meses e %d dias", anof, mesf, diaf);
	
	return 0;
	
}
