#include <stdio.h>
#include <locale.h>

    int main(){
        setlocale(LC_ALL, "Portuguese");



        int a, b, c;

        //entrada de dados

        printf("primeiro valor:");
        scanf("%d", &a);

        printf("Segundo valor:");
        scanf("%d", &b);

        printf("Terceiro valor:");
        scanf("%d", &c);

        //Sa�da de dados
        printf("\n\n Ordem Crescente: ");
        if (a<b &&b<c){
                printf("%d %d %d", a,b,c);
        } else if (a<c && c<b){
                printf("%d %d %d", a,c,b);

        }else if (b<a && a<c){
                printf("%d %d %d", b,a,c);

        } else if (b<c && c<a){
            printf("%d %d %d",  b,c,a);

        } else if (c<a && a<b){
            printf("%d %d %d",  c,a,b);

        }else{
            printf("%d %d %d", c,b,a);
        

    }

    }

