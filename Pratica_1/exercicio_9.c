#include <stdio.h>
#include <math.h> // Biblioteca para a função sqrt (raiz quadrada)

int main() {
    float catetoA, catetoB, hipotenusa;

    // Solicite ao usuário que insira os valores dos catetos
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &catetoA);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &catetoB);

    // hipotenusa usando o Teorema de Pitágoras
    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);

    return 0;
}