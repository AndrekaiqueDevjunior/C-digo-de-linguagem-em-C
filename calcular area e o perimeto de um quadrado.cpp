#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
	int main(){
		
	    setlocale(LC_ALL,"Portuguese");
		float area, lado;	
		
		printf("Digite  o lado: ");
		scanf("%f", &lado);
		
		
		area = ( lado * lado);
	}
