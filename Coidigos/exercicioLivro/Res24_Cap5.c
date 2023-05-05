#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int op;
    float sal=0,imp=0,aum=0,novoSal=0;

    do{
        printf("MENU DE OPCOES \n");
        printf("\t 1 - Imposto \n");
        printf("\t 2 - Novo Salarario \n");
        printf("\t 3 - Classificacao \n");
        printf("\t 4 - Finalizar o Programa \n");
        printf("Digite a opção desejada \n");
        scanf("%d",&op);


        if(op > 4 ||  op < 1 ){ 
            printf("Opcao Invalida \n");

        }

        switch(op){
            case 1:

                printf("Por Favor digite o Valor do Salario:\n");
                scanf("%f",&sal);
                if(sal < 500){
                    imp = sal * (5.0/100.0);
                }else if(sal >= 500 && sal <= 850){
                    imp = sal * (10.0/100.0);
                }else if(sal > 850){
                    imp = sal * (15.0/100.0);

                }

                printf("\t Imposto(%.2f) \n",imp);
            break;

            case 2:

                printf("Por Favor digite o Valor do Salario:\n");
                scanf("%f",&sal);
                if(sal > 1500){
                    aum =  25;
                }else if(sal >= 750 && sal <= 1500){
                    aum = 50;
                }else if(sal >= 450 && sal < 750){
                    aum = 75;

                }else if(sal < 450){
                    aum = 100;
                }

                novoSal = sal + aum;
                printf("\t Novo Salario(%.2f) \n",novoSal);
            break;

            case 3:

                printf("Por Favor digite o Valor do Salario:\n");
                scanf("%f",&sal);
                if(sal <= 700){
                    printf("Mal Remunerado \n");    
                }else{
                    printf("Bem Remunerado \n"); 
                }
               
            break;
        }

    }while(op != 4);
    
    

return(0);
}