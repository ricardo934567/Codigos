/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Res02_Cap5.c
 * Author: Alunos
 *
 * Created on 10 de Maio de 2022, 14:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(){
    //daclarando variavéis 
    int num, i, j, fat;
    float e=1.0;

    //recebendo valores 
    printf("digite um numero inteiro positivo:\n");
    scanf("%i", &num);

    
    for(i=1;(i<= num);i++){
        fat = 1;//inicando/reiniciando o valor de fat 
       for(j=1;(j<= i);j++) {
           //calculando o valor de fat
           fat= fat * j;
       } 
     //setando a formula   
     e = e + 1.0/fat;   
    }
    // mostrando saida de dados
    printf("O resultado da Formula é: %.2f",e);
    return 0;
}

