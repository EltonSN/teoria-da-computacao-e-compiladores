#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // solicita a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Realiza o calculo da média do aluno
    media = (nota1 + nota2 + nota3) / 3;

    // Apresente a média
    printf("A méia das notas é: %.2f\n", media);

    return 0;
}