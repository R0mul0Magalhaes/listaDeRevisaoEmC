#include <stdio.h>

int main() {
    char turno;

    printf("Escreva o turno (M-matutino, V-vespertino, N-noturno): ");
    scanf(" %c", &turno);

    if (turno == 'M' || turno == 'm') {
        printf("Bom dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("Boa tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("Boa noite!\n");
    } else {
        printf("Valor inválido!\n");
    }

    return 0;
}