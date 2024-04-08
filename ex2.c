#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Digite o numero: \n");
    scanf("%d", &n1);

    if(n1 < 0 ){
        printf("Numero negativo!\n");
    }

    else if(n1 > 0){
        printf("Numero positivo\n");
    }

    else{
        printf("Numero igual a zero\n");
    }
    return 0;
}