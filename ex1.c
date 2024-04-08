#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    printf("Digite o primeiro numero: \n");
    scanf("%f",&n1);
    printf("Digite o segundo numero: \n");
    scanf("%f",&n2);

    if (n1 > n2){
        printf("O primeiro numero é maior do que o segundo!");
    }

    else if (n1 < n2){
        printf("O segundo numero é maior do que o primeiro!");
    } 
    return 0;
}

