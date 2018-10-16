//Projecto Ex4
/* Elabore o programa que lê do standard input (teclado) uma sequência de dois ou mais inteiros
que termina com um valor não numérico (uma qualquer letra), para calcular se todos os inteiros
lidos são iguais ou se estão em ordem crescente ou se estão em ordem decrescente ou se não
estão em nenhuma ordem, escrevendo no standard output (terminal), respectivamente “todos
iguais”, ”Em ordem crescente”, ”Em ordem decrescente”, ”Em Ordem Arbitrária”.*/

#include <stdio.h>

int main()
{
    int num, temp, ordem;//sequencia, temporario, definição da ordem
    ordem = temp = 0; //para indicar a não utilização da ordem
    int ciclo = 0; // para evitar a primeira comparação
    printf("introduza a sua sequencia de numeros # # (letra para sair): ");
        
    
    while(scanf("%d", &num)) // ciclo de scanf e comparação
    {
        if(temp < num && ciclo > 0)  // crescente
            if(ordem != 1 && ordem != 0) // teste de continuidade da ordem
                ordem = 4;//já houve outra ordem antes, portanto é arbitraria  
            else
                ordem = 1;// pertence apenas a ordem crescente
        else if(temp > num && ciclo > 0) //decrescente
            if(ordem != 2 && ordem != 0) 
                ordem = 4;
            else
                ordem = 2;
        else if(temp == num && ciclo > 0) //igualdade
        {
            if(ordem != 3 && ordem != 0) 
                ordem = 4;
            else
                ordem = 3;
        }   
        temp = num;
        ciclo ++;        
    }   
    
    
    // para colocar o resultado
    switch(ordem) 
    {
        case 0:
            printf("Insira mais do que um numero sff");
            break;
        case 1:
            printf("\nEm ordem crescente");
            break;
        case 2:
            printf("\nEm ordem decrescente");
            break;
        case 3:
            printf("\ntodos iguais");
            break;
        case 4:
            printf("\nEm ordem arbitraria");
            break;
        default:
            printf("\nERRO: encontra-se entre a cadeira e o teclado");
    }   
    return 0;
}
