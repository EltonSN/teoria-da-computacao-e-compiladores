#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalarios;

    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salarioFuncionario);

    quantidadeSalarios = salarioFuncionario / salarioMinimo;

    printf("O funcionário recebe %.2f salários mínimos.\n", quantidadeSalarios);

    return 0;
}