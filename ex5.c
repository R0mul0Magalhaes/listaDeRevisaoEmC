#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, media;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7.0){
        printf("Aluno aprovado!");
    }
    else if (media == 10.0){
        printf("Aluno aprovado com Distinção!");
    }
    else if(media < 7.0){
        printf("Aluno reprovado!");
    }
    else{
        printf("Nota Invalida!");
    }

    return 0;
}