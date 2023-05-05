/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Res03_Cap5.c
 * Author: Alunos
 *
 * Created on 10 de Maio de 2022, 14:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(){
    //daclarando variavéis 
    int num, i, j, fat;
    

    //recebendo valores 
    printf("digite um numero inteiro positivo:\n");
    scanf("%i", &num);

    
    for(i=1;(i<= num);i++){
        fat = 1;//inicando/reiniciando o valor de fat 
       for(j=1;(j<= i);j++) {
           //calculando o valor de fat
           fat= fat * j;
       } 
      
    // mostrando saida de dados
    printf("O resultado da fatoração de (%d) é: %d\n",i,fat);
    }
   
    
    
    return 0;
}
