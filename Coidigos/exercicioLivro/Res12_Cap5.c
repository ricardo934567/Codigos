#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaracao de variaveis com alguns valores pre-definidos
    int pecasOP,numOP,i,contM=0,contF=0;
    float numMaior,mediaM=0.0,mediaF=0.0,salMaior,salOP,toFolha=0.0,toPecas=0.0;
    char sexoOP[2];

    for(i=1; i <= 15; i++){
        // entrada de dados
        printf("Por Favor digite o numero do %d° operario:\n",i);
        scanf("%d",&numOP);

        printf("Por Favor digite o sexo do operario(M ou F)\n");
        scanf("%s%*c",sexoOP);

        printf("Por Favor digite o total de pecas fabricadas pelo %d° operario:\n",i);
        scanf("%d",&pecasOP);

        // verificando quantidade de peças feitas e aplicando a  taxa de acordo
        if(pecasOP <= 30){
            salOP = 450.0;
        }else if(pecasOP > 30 && pecasOP <= 50){
            salOP = 450.0 + ((pecasOP-30.0)* (3.0/100.0) * 450.0);
        }else if(pecasOP > 50){
            salOP = 450.0 + ((pecasOP-30.0)* (5.0/100.0) * 450.0);
        }

        printf("O operario de numero %d recebe salario = %.2f",numOP,salOP);
        toFolha = toFolha + salOP;
        toPecas = toPecas + pecasOP;
        
        //verificando masculino ou feminino
        if(strcmp(sexoOP,"M")== 0){
            mediaM = mediaM + pecasOP;
            contM = contM + 1;
        }else if(strcmp(sexoOP,"F")==0){
            mediaF = mediaF + pecasOP;
            contF = contF + 1;
        }

        // verificando o maior salário
        if(i==1){
            salMaior = salOP;
            numMaior = numOP;
        }else if(salOP > salMaior){
            salMaior = salOP;
            numMaior = numOP;
        }
        
        printf("Total da folha de pagamento = %.2f \n",toFolha);
        printf("Total de pecas fabricadas no mes = %d",toPecas);
        if( 1 = 1){

        }
    }

return(0);
}