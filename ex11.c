#include <stdio.h>

int main() {
    float salario, novoSalario, aumento;
    int porcentagem;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (salario <= 280.00) {
        porcentagem = 20;
    } else if (salario <= 700.00) {
        porcentagem = 15;
    } else if (salario <= 1500.00) {
        porcentagem = 10;
    } else {
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100.0;
    novoSalario = salario + aumento;

    printf("Salario antes de reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento: %d%%\n", porcentagem);
    printf("Valor do Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}