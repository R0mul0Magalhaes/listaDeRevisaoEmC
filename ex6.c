#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3){
        printf("O maior numero é ", &n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("O maior numero é ", &n2);
    }
    else if(n3 > n1 && n3 > n2){
        printf("O maior numero é ", &n3);
    }
    else{
        printf("Numeros Iguais");
    }
    return 0;
}