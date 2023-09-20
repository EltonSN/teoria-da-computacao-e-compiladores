#include <stdio.h>

int main() {
    float peso, novoPeso;

    printf("Digite o peso atual da pessoa: ");
    scanf("%f", &peso);

    // se a pessoa engordar 15%
    novoPeso = peso + (peso * 0.15);

    // novo peso
    printf("Se a pessoa engordar 15%%, o novo peso será: %.2f\n", novoPeso);

    // se a pessoa emagrecer 20%
    novoPeso = peso - (peso * 0.20);

    printf("Se a pessoa emagrecer 20%%, o novo peso será: %.2f\n", novoPeso);

    return 0;
}