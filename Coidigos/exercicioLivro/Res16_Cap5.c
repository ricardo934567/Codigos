#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    float base,altura,area;

    system("cls");
   do{
        printf("digite o valor da base:\n");
        scanf("%f",&base);
        system("cls");
    }
    while (base < 1);
        
        
    do{
        printf("digite o valor da altura:\n");
        scanf("%f",&altura);
        system("cls");
    }
    while (altura < 1);

    area = (base * altura) / 2.0;
    printf("Area eh = %.2f",area);
    

return(0);
}