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

    if (n1 < n2 && n1 < n3){
        printf("O menor número é: %d\n", n1);
        if (n2 < n3) {
            printf("O maior número é: %d\n", n3);
        } else {
            printf("O maior número é: %d\n", n2);
        }
    }else if (n2 < n1 && n2 < n3){
        printf("O menor número é: %d\n", n2);
        if (n1 < n3) {
            printf("O maior número é: %d\n", n3);
        } else {
            printf("O maior número é: %d\n", n1);
        }
    }else{
        printf("O menor número é: %d\n", n3);
        if (n1 < n2){
            printf("O maior número é: %d\n", n2);
        }else{
            printf("O maior número é: %d\n", n1);
        }
    }

    return 0;
}