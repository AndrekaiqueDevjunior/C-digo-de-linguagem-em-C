//programa que leia a ter�a parte de um n�mero

#include <stdlib.h>
#include <stdio.h>


int main(){
	float numero = 0, resultado=0;
	
	
	printf("/nDigite algum n�mero:");
		scanf ("%f", &numero );
		
		resultado=numero/3;
		
		
	printf("/nO resultado �: %2.f\n\n\n\n\n", resultado);
	
	system ("pause");
	return (0);		
}
