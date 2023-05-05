#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int i;
    float valInicial,juros,valParc,total,valJuros,numParc;

    //entrada de dados
    printf("Digite o valor inicial da divida\n");
    scanf("%f",&valInicial);

    //setando valores iniciais
    juros = 0;
    numParc = 1;
    total = valInicial;
    valParc = valInicial;

    // mostando na tela os valores iniciais
    printf("\t Total(%.2f) \n",total);
    printf("\t Juros(%.2f) \n",juros);
    printf("\t Num Parc (%.0f) \n",numParc);
    printf("\t Valor Parc(%.2f)\n\n", valParc);

    //calculo
    juros = juros + 10;
    numParc = numParc +2;

    // calcular próximas parcelas
    for(i=1;i<=4;i++){

        //calculo
        valJuros = valInicial * (juros/100.0);
        total = valInicial + valJuros;
        valParc = total / numParc;

        // mostando na tela os valores iniciais
        printf("\t Total(%.2f) \n",total);
        printf("\t Valor Juros(%.2f) \n",valJuros);
        printf("\t Num Parc (%.0f) \n",numParc);
        printf("\t Valor Parc(%.2f)\n\n", valParc);

        //calculo
        juros = juros + 5;
        numParc = numParc +3;
    }


    return(0);
}