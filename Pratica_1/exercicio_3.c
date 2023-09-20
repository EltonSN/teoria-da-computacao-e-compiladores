#include <stdio.h>

int main() {
    float cotacaoDolar, valorDolar, valorReais;

    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor em dólares: ");
    scanf("%f", &valorDolar);

    valorReais = valorDolar * cotacaoDolar;

    // Apresenta o valor em reais
    printf("O valor em reais é: R$%.2f\n", valorReais);

    return 0;
}