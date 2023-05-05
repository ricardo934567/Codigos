#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    float salCarlo,salJoao;
    int meses;

    // recebendo e setando valores iniciais valores 
    printf("Digite o valor do salario do Carlos\n");
    scanf("%f",&salCarlo);
    salJoao = salCarlo/3.0;
    meses = 0;


    while(salJoao < salCarlo){
        salCarlo = salCarlo + (salCarlo * (2.0/100));
        salJoao = salJoao + (salJoao * (5.0/100.0));
        meses = meses + 1 ;
    }
   
    //saída de dados
    printf("Meses: %d\n",meses);

return(0);
}