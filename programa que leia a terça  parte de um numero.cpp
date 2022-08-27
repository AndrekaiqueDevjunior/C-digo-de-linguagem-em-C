//programa que leia a terça parte de um número

#include <stdlib.h>
#include <stdio.h>


int main(){
	float numero = 0, resultado=0;
	
	
	printf("/nDigite algum número:");
		scanf ("%f", &numero );
		
		resultado=numero/3;
		
		
	printf("/nO resultado é: %2.f\n\n\n\n\n", resultado);
	
	system ("pause");
	return (0);		
}
