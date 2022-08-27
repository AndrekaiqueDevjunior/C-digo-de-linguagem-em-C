#include <stdio.h>
#include <locale.h>
//entrada
int  valor2, valor4;

main(void){


		setlocale(LC_ALL, "portuguese");
                             
		printf("Informe o valor do bilhete único");
		scanf("%d", &valor2);
		
		printf("Informe o valor do bilhete único");
		scanf("%d", &valor4);
	
          		
		if (valor2 > valor4){
		
			printf("Você precisa recarregar:");
		}else{				  
			printf("Você não precisa recarregar, agora:");
					
    }
  

