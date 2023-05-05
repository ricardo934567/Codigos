#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int i, num, quantDivisor=0;

    //recebendo dados
    printf("Por Favor digite um Numero:\n");
    scanf("%d",&num);

    for(i=1;i <= num;i++){
        if(num % i == 0){
            quantDivisor = quantDivisor + 1;
        }
    }
    if(quantDivisor > 2){
        printf("Numero nao e Primo");
    }else{
        printf("Numero  e Primo");
    }
return(0);
}