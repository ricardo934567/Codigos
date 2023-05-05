#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int i,numTermos,n1,n2,n3;

    //entrada de dados
    printf("Digite o Número de Termos\n");
    scanf("%d",&numTermos);

    // setando valores iniciais
    n1 = 2;
    n2 = 7;
    n3 = 3;
    i=4;
    // mostrando valores inciais
    printf("\n%d-",n1);
    printf("%d-",n2);
    printf("%d",n3);

    // calculando e mostando o resto da sequência levando em consideração o numero de termos 
    while(i!= numTermos){
        n1 = n1 * 2;
        printf("-%d",n1);
        i = i + 1; 
        if(i != numTermos){

            n2 = n2 * 3;
            printf("-%d",n2);
            i = i + 1;
            if(i != numTermos){
                n3 = n3 * 4;
                printf("-%d",n3);
                i = i + 1;  
            }
        }

    }
return(0);
}