#include <stdio.h>
#include <stdlib.h>


	int main(){
		int num, numMaior, numMenor;
		int inicioLeitura = 1;
		
		printf("Digite qualquer numero:");
		
		while (num >=0){
			scanf("%d", &num);
			
			if(inicioLeitura == 1){
				numMaior = num;
				numMenor = num;
			}
			
			inicioLeitura = 0;
			
			if (num >=0){
				if (num < numMaior){
					numMenor = num;
				}
			}
		}
		
		printf("Maior numero: %d\n", numMaior);
		printf("Menor numero: %d\n", numMenor);
	}
