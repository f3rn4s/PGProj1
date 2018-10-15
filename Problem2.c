//Projecto Ex2
/*Faça um programa que apresenta a idade de alguém em termos de anos, meses e dias,
dada a sua data de nascimento e a data corrente. As duas datas são lidas do standard
input (teclado) no formato dia mês ano (três valores inteiros). O programa deve 
verificar se as datas introduzidas são válidas e deve assinalar se a data de nascimento 
é superior à data corrente. Os valores das datas devem obedecer às seguintes condições:
o ano deverá estar entre 1900 e 2018, o mês entre 1 e 12 e o dia entre 1 e DiasMes, onde
DiasMes corresponde ao número de dias do respetivo mês. Escreva no standard output (terminal) 
a idade e, caso a data corrente seja de aniversário, deve adicionalmente escrever muitos parabéns.*/
#include <stdio.h>

int main()
{
    int dia1, dia2, mes1, mes2, ano1, ano2, vald1, vald2, 
    diasmes1, diasmes2, diaf, mesf, anof;
        
    do //entrada e validação da data de nascimento
    {
        vald1 = 0;
        printf("insira a data de nascimento, d m aaaa: ");
        scanf("%d%d%d", &dia1, &mes1, &ano1);
        if(ano1<1900 || ano1>2018) // validação do ano
        {
            printf("ERRO: apenas anos entre 1900 e 2018\n re");
            vald1 = 1;
        }
        if(mes1<1 || mes1>12) //validação do mes
        {
            printf("ERRO: apenas entre 1 a 12 meses\n re");
            vald1 = 1;
        }   
        if(mes1<8)
        {
            if(mes1%2) //definição dos dias dos meses 
                diasmes1 = 31;
            else
                diasmes1 = 30; // meses pares têm 30 dias
        }
        else
        {
            if(mes1%2) //definição dos dias dos meses 
                diasmes1 = 30;
            else
                diasmes1 = 31; // meses impares têm 30 dias
        }
        if(mes1 == 2 && (ano1%4 || ano1 == 1900 || ano1 == 2000)) 
            diasmes1 = 29;
        else if(mes1 == 2)
            diasmes1 = 28;
            
        if(dia1<1 || dia1>diasmes1) // validação dos dias
        {
            printf("no %d mes há apenas entre 1 a %d dias\n", mes1, diasmes1);
            vald1 = 1;
        }
    }while(vald1);
    
    do //entrada e validação da data atual
    {
        vald2 = 0;
        printf("insira a data de atual, d m aaaa: ");
        scanf("%d%d%d", &dia2, &mes2, &ano2);
        
        if(ano1>=ano2&& mes1 >= mes2 && dia1 >= dia2)//validar se ano nascimento antecede ano actual
        {
            printf("ERRO: a data de nascimento tem de anteceder a data atual!!!\n re");
            vald2 = 1;
        }
        
        if(ano2<1900 || ano2>2018) // validação do ano
        {
            printf("ERRO: apenas anos entre 1900 e 2018\n re");
            vald2 = 1;
        }
        if(mes2<1 || mes2>12) //validação dos meses
        {
            printf("ERRO: apenas entre 1 a 12 meses\n re");
            vald1 = 1;
        }   
        
        if(mes2<8)
        {
            if(mes2%2) //definição dos dias dos meses 
                diasmes2 = 31;
            else
                diasmes2 = 30; // meses pares têm 30 dias
        }
        else
        {
            if(mes2%2) //definição dos dias dos meses 
                diasmes2 = 30; 
            else
                diasmes2 = 31; // meses pares têm 30 dias
        }
        if(mes2 == 2 && (ano2%4 || ano2 == 1900 || ano2 == 2000)) 
            diasmes2 = 29;
        else if(mes2 == 2)
            diasmes2 = 28;
            
        if(dia2<1 || dia2>diasmes2)// validação dos dias
        {
            printf("no %d mes há apenas entre 1 a %d dias\n", mes2, diasmes2);
            vald2 = 1;
        }
    }while(vald2);
    
    //calculo da diferença
    anof = ano2 - ano1;
    mesf = mes2 - mes1;
    diaf = dia2 - dia1;
    
    // caso seja dia de aniversario
    if(mesf == 0 && diaf == 0)
        printf("\nMuitos parabens\n");
    
    //bloco adicional para as insuficiencias do 'calculo da diferença'  
    if(mesf<0)
    {
        anof--;//subtrai-se 1 ao ano
        mesf += 12;//e somar o valor negativo a 12
    }   
    
    // para dias negativos
    if(diaf<0)
    { 
        if(mesf == 0) 
        {
            anof--;
            mesf = 11;
            diaf = diasmes1 + diaf;
        }
        else
        {
            mesf--;
            diaf = diasmes1 + diaf;
        }
    }
     //colocar o resultado
    printf("tem %d anos, %d meses e %d dias", anof, mesf, diaf);
    
    return 0;
}