#include <stdio.h>
#include <locale.h>
//entrada
int  valor2, valor4;

main(void){


		setlocale(LC_ALL, "portuguese");
                             
		printf("Informe o valor do bilhete �nico");
		scanf("%d", &valor2);
		
		printf("Informe o valor do bilhete �nico");
		scanf("%d", &valor4);
	
          		
		if (valor2 > valor4){
		
			printf("Voc� precisa recarregar:");
		}else{				  
			printf("Voc� n�o precisa recarregar, agora:");
					
    }
  

