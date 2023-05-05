#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis
    int i;
    float preco,custoEst,imp,precoFinal,adicional,maiorP,menorP,
          totImp,qtdB,qtdN,qtdC;

    char refri[2],catego[7];

    // setando valores para não pegar lixo de memória
    adicional = 0;
    totImp = 0;
    qtdB = 0;
    qtdN = 0;
    qtdC = 0;

    for(i=1;i<=12;i++){

        //entrada de dados
        printf("Por Favor digite o Preco: \n");
        scanf("%f",&preco);
        printf("Eh refrigerado (S ou N): \n");
        scanf("%s*c",refri);
        printf("Qual A Categoria: \n");
        scanf("%s*c",catego);


        // comparaçoes de preços
        if(preco <= 20){
            if(strcmp(catego,"A") ==0){
                custoEst = 2;

            }else if(strcmp(catego,"L")==0){
                custoEst = 3;
            }else if(strcmp(catego,"V")==0){
                custoEst = 4;
            }
        }

        if(preco > 20 && preco <= 50){
            if(strcmp(refri,"S")==0){
                custoEst = 6;

            }else{
                custoEst = 0;
            }

        }

        if(preco > 50){
            if(strcmp(refri,"S")==0){
                if(strcmp(catego,"A") ==0){
                    custoEst = 5;

                }else if(strcmp(catego,"L")==0){
                    custoEst = 2;
                }else if(strcmp(catego,"V")==0){
                    custoEst = 4;
                }
            }else{
                if(strcmp(catego,"A") == 0 || strcmp(catego,"V")){
                    custoEst = 0;

                }else if(strcmp(catego,"L")==0){
                    custoEst = 1;

                }
            }
        }

        if(strcmp(catego,"A")== 1 && strcmp(refri,"S")==1){
            imp = preco * (2.0/100.0);
        }else{
            imp = preco * (4.0/100.0);
        }

        precoFinal = preco + custoEst + imp;

        printf("\t Custo Estimado(%.2f) \n",custoEst);
        printf("\t Imposto(%.2f) \n",imp);
        printf("\t Preco Final (%.2f) \n",precoFinal);

        if(precoFinal <= 20){
            qtdB = qtdB +1;
            printf("Classificacao Barato \n ");

        }else if(precoFinal > 20 && precoFinal <=100){
            qtdN = qtdN +1;
            printf("Classificacao Normal\n");

        }else if(precoFinal > 100){
            qtdC = qtdC + 1;
            printf("Classificacao Caro(a)");
        }

        adicional = adicional +custoEst + imp;
        totImp = totImp + imp;

        if(i == 1){
            maiorP = precoFinal;
            menorP = precoFinal;

        }else{
            if(precoFinal > maiorP){
                maiorP = precoFinal;
            }
            if(precoFinal < menorP){
                menorP = precoFinal;
            }
        }

    }

    adicional = adicional / 12;
    printf("\t Adcional(%.2f) \n",adicional);
    printf("\t Maior Preco(%.2f) \n",maiorP);
    printf("\t Menor Preco(%.2f) \n",menorP);
    printf("\t Total Imposto(%.2f) \n",totImp);
    printf("\t Quant. Barato(%.0f) \n", qtdB);
    printf("\t Quant. Normal(%.0f) \n", qtdN);
    printf("\t Quant. Caro(%.0f) \n", qtdC);

return(0);
}