#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis
    int i,numCri;
    float meses,porcF,porcM,totF,totM,tot24,porc24 ;
    char sexo[2];

    // entrada de dados
    printf("Digite o número de crianças nascidas no periodo \n");
    scanf("%d",&numCri);

    // Setando valores Iniciais
    totM = 0;
    totF = 0;
    tot24 = 0; 
    
    for(i=1; i <= numCri; i++){
        // entrada de sexo e idade
        printf("Digite o Sexo da Crianca (%d)\n",i);
        scanf("%s%*c",sexo);
        printf("Por Favor digite o tempo de vida (e meses) da Crianca (%d)\n",i);
        scanf("%f",&meses);
        
        // verificação de sexo
        if(strcmp(sexo,"M") == 0){
            totM = totM + 1;

        }else if(strcmp(sexo,"F") == 0){
            totF = totF + 1;
        }

        if(meses <= 24.0){
            tot24 = tot24 + 1;

        }

       

    }

     // verificação de crianças
    if(numCri == 0 || numCri == 0.0){

       printf("Nenhuma Crianca Digitada\n");

    }else{
            
        // calculo
        porcM = totM * 100 / numCri;
        porcF = totF * 100 / numCri;
        porc24 = tot24 * 100 / numCri;

        // saida de dados
        printf("Porcentual de Criancas do Sexo feminino mortas (%.2f)\n",porcF);
        printf("Porcentual de Criancas do Sexo Masculino mortas (%.2f)\n",porcM);
        printf("Porcentual de Criancas com 24 meses ou menos mortas no periodo (%.2f)\n",porc24);
    }

return(0);
}