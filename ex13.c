#include <stdio.h>

int main() {
    int elevador[3] = {0};
    int i;

    for (i = 0; i < 50; i++) {
        char escolha;
        printf("Qual elevador você usa com mais frequência? (A, B ou C): ");
        scanf("%c", &escolha);

        switch (escolha) {
            case 'A':
                elevador[0]++;
                break;
            case 'B':
                elevador[1]++;
                break;
            case 'C':
                elevador[2]++;
                break;
            default:
                printf("Escolha inválida. Digite A, B ou C.\n");
                i--;
                break;
        }
    }

    printf("\nNúmero total de pessoas que usam cada elevador:\n");
    printf("Elevador A: %d\n", elevador[0]);
    printf("Elevador B: %d\n", elevador[1]);
    printf("Elevador C: %d\n", elevador[2]);

    return 0;
}