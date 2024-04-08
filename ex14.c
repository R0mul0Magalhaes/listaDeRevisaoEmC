#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 4; i++) {
        float salarioBruto, salarioLiquido;
        int dependentes;

        printf("Digite o salário bruto do empregado %d: ", i+1);
        scanf("%f", &salarioBruto);
        printf("Digite o total de dependentes do empregado %d: ", i+1);
        scanf("%d", &dependentes);

        if (dependentes > 5) {
            dependentes = 5;
        }
        salarioLiquido = salarioBruto + (salarioBruto * 0.02 * dependentes);

        printf("O salário liquido do empregado %d is: %.2f\n", i+1, salarioLiquido);
    }

    return 0;
}