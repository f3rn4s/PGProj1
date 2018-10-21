/*
Programação 1

Grupo : K
Numero   Nome
         Samir Santo
35164    Fernando Duarte
10065    Luis Silva  

Projecto 1 
Ex4
Elabore o programa que lÃª do standard input (teclado) uma sequÃªncia de dois ou mais inteiros
que termina com um valor nÃ£o numÃ©rico (uma qualquer letra), para calcular se todos os inteiros
lidos sÃ£o iguais ou se estÃ£o em ordem crescente ou se estÃ£o em ordem decrescente ou se nÃ£o
estÃ£o em nenhuma ordem, escrevendo no standard output (terminal), respectivamente â€œtodos
iguaisâ€, â€Em ordem crescenteâ€, â€Em ordem decrescenteâ€, â€Em Ordem ArbitrÃ¡riaâ€.*/

#include <stdio.h>

  int main()
   {
    
    int escolha = 0; //variavel do menu
    int num, temp, ordem;//sequencia, temporario, definicao da ordem
    int ciclo = 0; // para evitar a primeira comparacao
    
    
    do {
        ordem = 0; temp = 0; ciclo = 0;//para indicar a nao utilizacao da ordem
        
        //Mostra o menu do programa
        printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
        printf("\n\t|            Menu             |");  
        printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");  
        printf("\n\t|                             |");
        printf("\n\t|  0 - Abandonar Programa     |");  
        printf("\n\t|  1 - Inicializar Captura    |");  
        printf("\n\t|                             |");
        printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
        printf("\n\t       Escolha  : ");
        
        //Admite a escolha 
        scanf("%d",&escolha);
                    
        // realiza a operacao seleccionada
        switch (escolha) {
        
        case  0: //abandonar
                 break;
                 
        case  1: //inicializar o programa
        
                 printf("\n\tintroduza a sua sequencia\n\tde numeros # # (letra para sair): ");     
    
                 while(scanf("%d", &num)) // ciclo de scanf e comparacao
                 {
                    if(temp < num && ciclo > 0)  {// crescente
                        if(ordem != 1 && ordem != 0) // teste de continuidade da ordem
                            ordem = 4;//ja houve outra ordem antes, portanto Ã© arbitraria  
                        else
                            ordem = 1;// pertence apenas a ordem crescente
                    }
                    else if(temp > num && ciclo > 0) {//decrescente
                        if(ordem != 2 && ordem != 0) 
                            ordem = 4;
                        else
                            ordem = 2;
                    }
                    else if(temp == num && ciclo > 0) //igualdade
                    {
                        if(ordem != 3 && ordem != 0) 
                            ordem = 4;
                        else
                            ordem = 3;
                    }   
                    temp = num;
                    ciclo ++;  
                 } //end while 
                   
                   // para colocar o resultado
                  switch(ordem) 
                    {
                        case 0://erro na insercao de dados
                             //if (ciclo>0) 
                            printf("\n\tInsira mais do que um numero sff");
                            break;
                        case 1://escrita por ordem crescente
                            printf("\n\tEm ordem crescente");
                            break;
                        case 2://escrita por ordem de crescente
                            printf("\n\tEm ordem decrescente");
                            break;
                        case 3://escrita com numeros todos iguais
                            printf("\n\ttodos iguais");
                            break;
                        case 4://escrita por ordem arbitraria
                            printf("\n\tEm ordem arbitraria");
                            break;
                        default://outros valores diferentes dos anteriores
                            printf("\n\tERRO: encontra-se entre a cadeira e o teclado");
                            break;
                    } //end de switch  
                    
                 getchar();//limpa o caracter do buffer do teclado
                 break; 
                 
        default : //outros valores
                 break; 
        }//end do switch
       
      }while(escolha > 0 );
  return 0;
}