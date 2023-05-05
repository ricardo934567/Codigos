#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis 
    float totF,totM,soma1,contM1,contM2,total,
          contF1,medIdade,perc,menorIdade,idade;
    char sexo[2],exp[2];   


    total = 0;
    totF = 0;
    totM = 0;
    soma1 = 0;
    contM1 = 0;
    contM2 = 0;
    contF1 = 0;

    printf("Por Favor digite a Idade:\n");
    scanf("%f",&idade);

    while(idade != 0){
        printf("Por Favor Digite o Sexo: \n");
        scanf("%s*c",sexo);
        printf("Por Favor Digire a Experiencia: \n");
        scanf("%s*c",exp);

        if(total == 0){
            menorIdade = idade;
            total = 1;
        }else if(idade < menorIdade){
            menorIdade= idade;
        }

        if(strcmp(sexo,"F")==0 && strcmp(exp,"S")==0){
            soma1 = soma1 + idade;
            contF1 = contF1 + 1;
        }

        if(strcmp(sexo,"M")==0){
            totM = totM + 1;


        }
        if(strcmp(sexo,"F")==0){
            totF = totF + 1;
            

        }

        if(strcmp(sexo,"F")==0 && idade < 21 && strcmp(sexo,"S")==0){
            contF1 = contF1 + 1;
 

        }

        if(strcmp(sexo,"M")==0 && idade > 45){
            contM1 = contM1 + 1;


        }

        if(strcmp(sexo,"M")==0 && strcmp(exp,"S")==0){
            soma1 = soma1 + idade;
            contM2 = contM2 + 1;
        }

        printf("Por Favor digite a Idade:\n");
        scanf("%f",&idade);
    }

    printf("\t Total Feminino(%.0f) \n",totF);
    printf("\t Total Masculino(%.0f) \n",totM);

    if(contM2 == 0){
        printf(" Nenhum Homem Com Expreriencia \n");
    }else{
        medIdade = soma1 / contM2;
        printf("\t Media Idade(%.1f) \n",medIdade);
    }

    if(totM == 0){
        printf("Nenhum Homem \n");
    }else{
        perc = contF1 * 100.0 / totM;
        printf("\t Percentual (%.2f) \n",perc);
    }

    printf("\t Cont F1(%.0f) \n",contF1);
    printf("\t Menor Idade(%.0f) \n",menorIdade);

return(0);
}