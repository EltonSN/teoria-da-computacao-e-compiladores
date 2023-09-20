#include <stdio.h>

int main() {
    float salarioAtual, novoSalario;

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);

    // Calcule o novo salário com aumento de 25%
    novoSalario = salarioAtual * 1.25;  // 25% é o mesmo que 1.25

    printf("O novo salário do funcionário é: R$%.2f\n", novoSalario);

    return 0;
}