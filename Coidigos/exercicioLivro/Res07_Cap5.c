#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int i,n1,n2,res;

    // setando valores iniciais
    n1 = 0;
    n2 = 1;
    // mostrando os primeiros numeros
    printf("%d-",n1);
    printf("%d",n2);
   
    //calculando e mostrando o resto da sequência
    for(i=3; i <=8 ; i++){
        res = n1 + n2;
        printf("-%d",res);
        n1 = n2;
        n2 = res;
    }



return(0);
}