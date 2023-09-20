#include <stdio.h>

int main() {
    float Celsius, Fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", Fahrenheit); 

    return 0;
}