/*
Programação 1

Grupo : K
Numero   Nome
         Samir Santo
35164    Fernando Duarte
10065    Luis Silva 

Projecto 
Ex5
Utilize a série apresentada abaixo na realização de um programa que calcula
um aproximado de π, lendo para tal do standard input (teclado) o número n de 
termos da série, entre 20 e 100. O cálculo do valor de π é determinado ao fim 
das n iterações. Escreva esse valor no standard output (terminal).
Nota: na resolução desta questão não pode usar funções da biblioteca de C*/

#include <stdio.h>

int main()
{
    
    //Declaracao de variaveis
    int escolha = 0, i;
    int n = 0;
    int k = 1;
    double pi = 0.0;

    //Leitura de valores e validacao dos valores introduzidos
  do {
    
      //mostra as opcoes do menu
      printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~+");
      printf("\n\t|         Menu          |");        
      printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~+");        
      printf("\n\t|  0 - Abandonar App    |");        
      printf("\n\t|  1 - Total de Termos  |");
      printf("\n\t|  2 - Calculo de Pi    |");  
      printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~+");  
      printf("\n\t       Escolha  : ");
      
      //admite uma possibilidade
      scanf("%d", &escolha);
      
      //testa esse valor e processa a escolha
      switch(escolha) {
       case 0: //ABANDONAR O PROGRAMA
               break;
               
       case 1: //ADMITIR O TOTAL DE TERMOS
                    do {
                         printf("\n\tInsira o numero de termos\n\tentre 20 e 100 : ");
                         scanf("%d", &n);
                         
                        } while (n < 20 || n > 100);
               break;
               
       case 2:  //VISUALIZAR O RESULTADO
                       //Calculo do pi
                    
                        for ( i = 0; i < n; i++, k++)
                        {                   
                            if ( k % 2 == 1)    //potencias impares
                            {
                                pi += 4.0*(1.0/((2.0*k)-1.0));
                            }
                            else    //potencias pares
                            {
                                pi += 4.0*(-1.0/((2.0*k)-1.0));
                            }
                        } //end for 
                        
                        //Apresentacao de resultados
                        printf("\n\t\tPi = %lf \n", pi);       
               break;
               
       default : //OUTROS VALORES DIFERENTES DOS ANTERIORES
                break;
                                       
      }//end switch
      
    }while( escolha!= 0);
    
    return 0;
    
  }//end programa 
 
    
 
