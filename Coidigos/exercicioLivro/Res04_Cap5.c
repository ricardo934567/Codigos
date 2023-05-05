/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Res04_Cap5.c
 * Author: Alunos
 *
 * Created on 10 de Maio de 2022, 14:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cidadeID,numAcid,numVei,
        cidadeMaiorIndice,cidadeMenorIndice, cidadeMenor2K,cidadeMaiorID,cidadeMenorID;
    float cidadeMedVei,cidadeMedAcid,somaVei,somaAcid,contAcid;
    
    somaVei = 0;
    somaAcid = 0;
    contAcid= 0;
    
    for( int i = 1 ; i <= 5; i++){
        printf("Por Favor digite o código da Cidade:\n");
        scanf("%d",&cidadeID);
         printf("Por Favor digite o Número de Veículos:\n");
         scanf("%d",&numVei);
          printf("Por Favor digite o Número de Acidentes:\n");
        scanf("%d,%d,%d",&numAcid);
        system("clear || cls");
        
        if(i == 1){
            
            cidadeMenorID = cidadeID;
            cidadeMenorIndice = numAcid;
            
            cidadeMaiorID = cidadeID;
            cidadeMaiorIndice = numAcid;
            
        }else {
            if(numAcid > cidadeMaiorIndice){
              
                cidadeMaiorIndice = numAcid;
                cidadeMaiorID = cidadeID; 
                
            }else if(numAcid < cidadeMenorIndice ){
                        
                      cidadeMaiorIndice = numAcid;
                       cidadeMaiorID = cidadeID;    
                    
                    }// final do else if do if(numAcid > cidadeMaiorIndice)
                
            
              } // final do else  do if(i == 1)
        somaVei = somaVei + numVei;
        
        if(numVei < 2000){
            
            somaAcid =  somaAcid + numAcid;
            contAcid = contAcid + 1;
        }//final do  if(numVei < 2000)
        
    }//final do for
    cidadeMedVei = somaVei/5.0;
    cidadeMedAcid = somaAcid/contAcid;
    
    printf("Maior Indice de acidentes é:%d . E o código dessa cidade é(%d)\n",cidadeMaiorIndice,cidadeMaiorID);
    printf("Menor Indice de acidentes é:%d . E o código dessa cidade é(%d)\n",cidadeMenorIndice,cidadeMenorID);
    printf("A média de Veículos das  é :%.2f",cidadeMedVei);
    
    if (contAcid == 0){
        printf("Não foi digitada nenhuma cidade com menos de 2000 Veículos");
    }else {

        printf("A média de Acidentes das  é :%.2f",cidadeMedAcid);
        
          }
    return (EXIT_SUCCESS);
}

