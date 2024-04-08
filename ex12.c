#include <stdio.h>

int main() {
    int n1, i;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Enter an arithmetic operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("\n%d x %d = %d\n", n1, 1, n1 * 1);
    printf("%d x %d = %d\n", n1, 2, n1 * 2);
    printf("%d x %d = %d\n", n1, 3, n1 * 3);
    printf("%d x %d = %d\n", n1, 4, n1 * 4);
    printf("%d x %d = %d\n", n1, 5, n1 * 5);
    printf("%d x %d = %d\n", n1, 6, n1 * 6);
    printf("%d x %d = %d\n", n1, 7, n1 * 7);
    printf("%d x %d = %d\n", n1, 8, n1 * 8);
    printf("%d x %d = %d\n", n1, 9, n1 * 9);
    printf("%d x %d = %d\n", n1, 10, n1 * 10);

    switch (operacao) {
        case '+':
            for (i = 1; i <= 10; i++) {
                printf("%d + %d = %d\n", n1, i, n1 + i);
            }
            break;
        case '-':
            for (i = 1; i <= 10; i++) {
                printf("%d - %d = %d\n", n1, i, n1 - i);
            }
            break;
        case '*':
            for (i = 1; i <= 10; i++) {
                printf("%d * %d = %d\n", n1, i, n1 * i);
            }
            break;
        case '/':
            if (n1 == 0) {
                printf("Erro: A divisão por zero não é permitida.\n");
            } else {
                for (i = 1; i <= 10; i++) {
                    if (i == 1) {
                        printf("%d / %d = %.2f\n", n1, i, (float)n1 / i);
                    } else {
                        printf("%d / %d = %.3f\n", n1, i, (float)n1 / i);
                    }
                }
            }
            break;
        default:
            printf("A operação é invalida.\n");
            break;
    }

    return 0;
}