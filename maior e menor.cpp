#include <stdio.h>
#include <stdlib.h>


int main(){
    int num, numMaior, numMenor;
    int inicioLeitura = 1;

    printf("Digite alguns numeros:");

    while(num >= 0){
            scanf("%d", &num);
            if(inicioLeitura == 1){
                numMaior = num;
                numMenor = num;
            }

            inicioLeitura = 0;
            if(num > numMaior){
                numMaior = num;
            }
            if(num < numMenor){
                    numMenor = num;
                }
            }

            printf("Maior numero: %d", numMaior):
            printf("Maior numero: %d", numMenor):
    }

}

