#include <stdio.h>
#include <locale.h>
//entrada
int  idade1, idade2;

main(void){
		setlocale(LC_ALL, "portuguese");
//processamento		
		printf("Informe a idade da primeira pessoa:");
		scanf("%d", &idade1);
		
		printf("Informe a idade da segunda pessoa:");
		scanf("%d", &idade2);
	
//saída		
		if (idade1 > idade2 ){
			
			printf("A primeira pessoa é mais velha:");
			
		}else{
			printf("A segunda pessoa é mais velha:");
			
		}
}
  

