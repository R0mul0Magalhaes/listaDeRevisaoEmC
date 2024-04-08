#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1, p2, p3;

    printf("Digite o valor do primeiro produto: ");    
    scanf("%d",&p1);
    printf("Digite o valor do segundo produto: ");
    scanf("%d",&p2);
    printf("Digite o valor do terceiro produto: ");
    scanf("%d",&p3);

    if(p1 < p2 && p1 < p3){
        printf("O Produto recomendado é o P1");
    }
    else if(p2 < p1 && p2 < p3){
        printf("O Produto recomendado é o P2");
    }
    else if(p3 < p1 && p3 < p2){
        printf("O Produto recomendado é o P3");
    }
    else{
        printf("Produto de valor iguais!");
    }
    return 0;   
}