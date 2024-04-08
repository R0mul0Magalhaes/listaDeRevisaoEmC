#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite a letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("A letra %c é vogal.\n", letra);
    } else {
        printf("A letra %c é consoante.\n", letra);
    }

    return 0;
}