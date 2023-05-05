#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int num;
    float soma,qtd,maior,menor,qtdPar,medPar,somaPar,qtdImpar,media,perc;

    qtd = 0;
    qtdPar = 0;
    somaPar = 0;
    qtdImpar = 0;
    soma = 0;

    printf("Por Favor digite um numero: \n");
    scanf("%d",&num);

    while( num != 30000 ){

        //menor e maior
        if(qtd == 0){
             maior = num;
             menor = num;

        }else{
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }

        soma = soma + num;
        qtd = qtd + 1;

        // quantidade de impar e par;
        if((num % 2) == 0){
            somaPar = somaPar + num;
            qtdPar = qtdPar + 1;

        }else {
            qtdImpar = qtdImpar + 1;

        }

        printf("Por Favor digite um numero: \n");
        scanf("%d",&num);


    }


    if(qtd == 0){
        printf("Nenhum numero digitado \n");

    }else{
        printf("\t Soma(%.0f) \n",soma);
        printf("\t Quantidade (%.0f) \n",qtd);

        media = soma /qtd;

        printf("\t Media(%.2f) \n",media);
        printf("\t Maior(%.0f)\n",maior);
        printf("\t Menor(%.0f) \n",menor);
        if(qtdPar == 0){
            printf("nenhum Par");
        }else{
            medPar = somaPar/qtdPar;
            printf("\t Media Par(%.0f) \n",medPar);
        }

        perc = qtdImpar * (100.0/qtd);
        printf("\t Percentual(%.2f) \n",perc);


    }

return(0);
}