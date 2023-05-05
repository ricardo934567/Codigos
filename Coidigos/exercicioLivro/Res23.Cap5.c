#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    float sal,qtd,tipo,valKW,gasto,
    acresc,total,totGeral,qtdCons;

    totGeral = 0;
    qtdCons = 0;
    
    printf("Por Favor digite o valor do salario:\n");
    scanf("%f",&sal);
    printf("Por Favor digite a quantidade:\n");
    scanf("%f",&qtd);

    valKW = sal / 8.0;
    while(qtd != 0 || qtd != 0.0 ){
        gasto = qtd * valKW;

        printf("Por Favor digite o Tipo:\n");
        scanf("%f",&tipo);

       if(tipo == 1.0){
        acresc = gasto * (5.0 / 100.0);
       }else if(tipo==2.0){
        acresc = gasto * (10.0 / 100.0);

       }else if(tipo == 3.0){
        acresc = gasto * (15.0 / 100.0);

       }
        total = gasto + acresc;
        totGeral = totGeral + total;

        if ((total >= 500) && (total <= 1000.0)){
            qtdCons = qtdCons + 1.0;
        }

        printf("\t Gasto (%.1f) \n ",gasto);
        printf("\t Acrescimo (%.1f) \n",acresc);
        printf("\t Total (%.1f) \n",total);

        printf("Por Favor digite a quantidade:\n");
        scanf("%f",&qtd);
    }
    
    printf("\t Total Geral (%.2f) \n",totGeral);
    printf("\t Quantidade de Consumo (%.0f) \n",qtdCons);

return(0);
}