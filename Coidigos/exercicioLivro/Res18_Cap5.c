#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Declaracao de variaveis
    float num,cubo,quad,raiz;

    // entrada de dados
    printf("Escreva um numero :\n");
    scanf("%f",&num);

    // só irá para quando o numero digitado for menor que 0
    while(num > 0){
        // calculo
        quad = pow(num,2);
        cubo = pow(num,3);
        raiz = sqrt(num);

        //saida de dados
        printf("\t QUADRADO (%.2f)\n \t CUBO (%.2f) \n \t RAIZ (%.2f) \n",quad,cubo,raiz);

        // entrada de dados
        printf("Escreva um numero :\n");
        scanf("%f",&num);
    }

return(0);
}