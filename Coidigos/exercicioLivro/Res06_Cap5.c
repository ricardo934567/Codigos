#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
		//declaração de variáveis
		int cont,cod,nht;
		float salMin,salFinal,salInicial,aux,valor;
		char turno[2],categoria[2];
		
		// setando valores iniciais
		salMin = 450.0;
		
		for(cont=1;cont <=10;cont++ ){
			//recebendo valores	
			printf("Por Favor digite o Código \n");
			scanf("%d",&cod);
			printf("Por Favo digite o 'NHT' \n");
			scanf("%d",&nht);
			printf("Por Favor digite o Turno \n");
			scanf("%s%*c",turno);
			printf("Por Favor digite a Categoria");
			scanf("%s%*c",categoria);
		
			while(strcmp(turno,"N")!=0 && strcmp(turno,"V")!=0 && strcmp(turno,"M")!=0){
				// while para verificação esperando entrada correta
				printf("Por Favor digite o Turno\n");
				scanf("%s%*c",&turno);
			}
		
			while(strcmp(categoria,"G")!=0 && strcmp(categoria,"O")!=0){
				//while para verificção esperando entrada correta 
				printf("Por Favor digite a Categoria");
				scanf("%s%*c",&categoria);
			
			}
		
			if(strcmp(categoria,"G")==0){
					if(strcmp(turno,"N")==0){
						valor = salMin * (13.0/100.0);
					}else{
								valor = salMin * (10.0/100.0);
							
					}
			}else{
					if(strcmp(turno,"N")==0){
						valor = salMin * (18.0/100.0);
					}else{
								valor = salMin * (15.0/100.0);
							
					}
			}	
			salInicial = nht * valor;
			if(salInicial <= 300.0){
					
					aux= salInicial * (20.0/100.0);
				
			}else if(salInicial < 600.0){
				
					aux = salInicial * (15.0/100.0);
			
			}else{
					aux = salInicial * (5.0/100.0);
			}
			salFinal = salInicial = aux;
			printf("Código(%d)\n 'NHT'(%d)\n Valor:%.2f\n Salário Inicial:%.2f\n Auxilio:%2.f\n Salário Final:%.2f\n\n\n",cod,nht,valor,salInicial,aux,salFinal);
		}
		
		
	return 0;
}
