#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis
    float preco,imp,transp,seguro,final,totalImp,origem;
    char meioT[2],carga[2];
    
    //entrada de dados
    printf("Por Favor Digite o Preco:\n");
    scanf("%f",&preco);

    while(preco > 0){

        //entrada de dados
        printf("Por Favor Digite a Origem: \n");
        scanf("%f",&origem); 
        printf("Por Favor Digite Meio De transporte: \n");
        scanf("%s*c",meioT);
        printf("Por Favor Digite a Carga: \n");
        scanf("%s*c",carga);
        
        //calculo imposto
        if(preco <= 100){
            imp = preco * (5.0/100.0);

        }else{
            imp = preco * (10.0/100.0);
        }

        // com carga e sem carga
        if(strcmp(carga,"S")==0){
            if(origem == 1.0){
                transp = 50.0;
            }else if(origem == 2.0){
                transp = 21.0;
            }else if(origem == 3.0){
                transp = 24.0;
            }
        }
        if(strcmp(carga,"N")==0){
            if(origem == 1.0){
                transp = 12.0;
            }else if(origem == 2.0){
                transp = 21.0;
            }else if(origem == 3.0){
                transp = 60.0;
            }
        }
       
        if(origem == 2 || strcmp(meioT,"A")){
            seguro = preco / 2.0;

        }else{
            seguro = 0;
        }

        final = preco + imp + transp + seguro;

        totalImp = totalImp + imp;

        printf("\t Imposto(%.2f) \n",imp);
        printf("\t Transporte(%.2f) \n",transp);
        printf("\t Seguro(%.2f) \n",seguro);
        printf("\t Final(%.2f) \n",final);

        printf("Por Favor Digite o Preco:\n");
        scanf("%f",preco);


    }

    printf("Total Imposto:\n %.2f",totalImp);
return(0);
}