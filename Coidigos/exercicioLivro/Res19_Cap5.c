#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int m,n,i,soma;

    //entrada de dados
    printf("Por Favor digite valor inical do intervalo\n");
    scanf("%d",&m);
    printf("Por Favor digite valor final do intervalo \n");
    scanf("%d",&n);

    // funcionara quando o valor inicial for menor que o final
    while(m < n){

        soma = 0;
        for (i= m; i <= n; i++){
            soma = soma + i;
        }
        //saida de dados
        printf("\t SOMA (%d)\n",soma);

        //entrada de dados
        printf("Por Favor digite valor inical do intervalo\n");
        scanf("%d",&m);
        printf("Por Favor digite valor final do intervalo \n");
        scanf("%d",&n);

    }

return(0);
}