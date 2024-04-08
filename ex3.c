#include <stdio.h>
#include <stdlib.h>

int main() {
    char sx;

    printf("Digite uma letra:");
    scanf("%c",&sx);

    if(sx=='m'||sx=='M'){
        printf("\nM - Masculino");
    }else if(sx=='f'|| sx=='F'){
        printf("\nF - Feminino");
    }else{
        printf("\nSexo inválido!");
    }

    return 0;
}