/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Res01_Cap5.c
 * Author: Alunos
 *
 * Created on 10 de Maio de 2022, 13:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int tm_year; //ano 
    int i=2007,anoAtual;
    float salAnti=1000.00, salNovo, porcen;
    
  //ponteiro para struct que armazena data e hora  
    struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
    time_t segundos;
  
  //obtendo o tempo em segundos  
    time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
    data_hora_atual = localtime(&segundos);  
    
    anoAtual= data_hora_atual -> tm_year +1900;
    
    porcen = 1.5/100.0;
    //calculando o ano de 2006
    salNovo= salAnti + salAnti * porcen;

    for (i; i<= anoAtual;i++){
        //calculando o ano de 2007 em diante
        porcen = porcen *2.0;
        salNovo= salNovo + salNovo * porcen;
        
    }
    //mostrando o valor
    printf("O seu salário no ano atual será de : %.2f",salNovo);
    
    return (EXIT_SUCCESS);
}

