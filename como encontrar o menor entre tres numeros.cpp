#include <stdio.h>
#include <stdlib.h>

 int main(){
 	int a, b, c, menor, maior;
 	
 	printf("digite  tres valores");
 	scanf("%d%d%d", &a, &b,&c );
 	
 	//primeira solu��o
 	if (a < b){
 		if( a < c)
 			menor = a;
 		else
 			menor = c;
	 }
 	 else{
 	 	if(b < c)
 	 		menor = b;
 	 else
 	 		menor = c;
 	
 		
	  }
 	 if(a > b){
 	 	if (a > c)
 	 		maior = a;
 	 	else
 	 		maior = c;
 	 		
	  }
	  else{
	  	 if(b >c)
	  	 	maior = b;
	  	else	
	  		maior = c;
	  	
	  }
	  printf("Primeira vers�o\t Menor: %d\tMaior: %d \n", menor,maior);
	  
}
