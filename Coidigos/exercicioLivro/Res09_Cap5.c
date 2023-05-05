/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Res09_Cap5.c
 * Author: Alunos
 *
 * Created on 2 de Junho de 2022, 16:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //declarando variáveis
    int i,n1,n2,totalA,totalE,totalR;
    float mediaClasse,totalClasse,media;
    
    //sentando valor inicial
    totalClasse = 0.0;
    
    for(i=1;i <= 6; i++){
        
        //recebendo nota1 e nota2
        printf("Digite a Primeira nota\n");
        scanf("%d",&n1);
        
        printf("Digite a Segunda nota\n");
        scanf("%d",&n2);
        
        //calculando e mostrando media das nota 1 e 2
        media = (n1+n2)/2.0;
        printf("Media (%.0f)",media);
        
        // verificando se o aluno está reprovado/exame/aprovado
        if (media <= 3.0){
            
            totalR = totalR + 1;
            printf("Reprovado \n");
            
        }else   if(media > 3.0 && media < 7.0){
                    
                    totalE = totalE + 1;
                    printf("Exame \n");
            
                }else   if(media >=7.0){
                        
                            totalA = totalA +1;
                            printf("Aprovado \n");
                    
                        }
        //somando todas as médias
        totalClasse = totalClasse + media;
    }
    
    printf("Total Reprovado (%d) \n",totalR);
    printf("Total em Exeme (%d) \n",totalE);
    printf("Total Aprovado (%d) \n",totalA);
    mediaClasse = totalClasse / 6;
    printf("Media da Classe: %.0f",mediaClasse);

    return (EXIT_SUCCESS);
}

