#include <stdio.h>
#include <math.h> //biblioteca para usar a constante M_PI

int main() {
    float raio;
    float comprimento, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    // o comprimento da esfera
    comprimento = 2 * M_PI * raio;

    // a área da esfera
    area = M_PI * raio * raio;

    // o volume da esfera
    volume = (3.0 / 4.0) * M_PI * pow(raio, 3);

    printf("O comprimento da esfera é: %.2f\n", comprimento);
    printf("A área da esfera é: %.2f\n", area);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}