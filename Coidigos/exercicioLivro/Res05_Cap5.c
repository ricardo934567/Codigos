/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alunos
 *
 * Created on 17 de Maio de 2022, 14:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int fim,i,j,x,expoente,numTermos;
    float den, denominador,fat,s;
    
    
    printf("Por Favor Digite o número de Termos \n");
    scanf("%d",&numTermos,&x);
    
    s = 0.0;
    denominador = 1.0;
    
    for(i=1;1 <= numTermos; i++){
        fim = denominador;
        fat = 1.0;
        
        for(j=1;j<= fim; j++){
            fat = fat * j;
        }
        
        expoente = i + 1;
        
        if((expoente % 2)==0){
            s = s - pow(x,expoente)/fat;
        }else{
            s = s + pow(x,expoente)/fat;
         }
        
        if( denominador == 4){
            den = -1.0;
           
        }
        
        if( denominador == 1){
            den = 1.0;
           
        }
        
        if( den == 1){
            denominador = denominador + 1;
           
        }else{
            
            denominador = denominador - 1;
            
         }
       
    }
    
    printf("O Resultado foi: %.2f \n",s );
    
    return (EXIT_SUCCESS);
}

