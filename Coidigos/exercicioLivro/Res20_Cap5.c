#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis
    float cod, numH,salBa,salLi,medM,medF,contM,contF;
    char sexo[2];

    //entrada de dados
    printf("Por Favor Digite o Cadigo\n");
    scanf("%f",&cod);

    contM = 0;
    contF = 0;

    while(cod != 99999){
        printf("Por Favor digite o Sexo \n");
        scanf("%s%*c",sexo);
        printf("Por Favor Digite o NumH\n");
        scanf("%f",&numH);

        salBa = numH * 30; 
        if(strcmp(sexo,"M")==0){
            salLi = salBa * (salBa*(10.0/100.0));
            medM = medM  + salLi;
            contM = contM + 1;

        }else  if(strcmp(sexo,"F")==0){
            salLi = salBa * (salBa*(5.0/100.0));
            medF = medF + salLi;
            contF = contF + 1;

        }

        printf("\t Codigo(%.0f) \n",cod);
        printf("\t Salario Base (%.2f) \n",salBa);
        printf("\t Salario Liquido(%.2f) \n",salLi);

        printf("Por Favor Digite o Cadigo\n");
        scanf("%f",&cod);
    }

    if(contM == 0){
        printf("Nenhum professor do sexo masculino");

    }else{
        medM =  medM/contM;
        printf("\t Media Masculina(%.2f) \n",medM);
    }

    if(contF == 0){
        printf("Nenhum professor do sexo Feminino");

    }else{
        medF =  medF/contF;
        printf("\t Media Feminina(%.2f) \n",medF);
    }



return(0);
}