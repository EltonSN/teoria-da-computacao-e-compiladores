#include <stdio.h>

// Função para ler uma sequência de números naturais de um arquivo e armazená-la em um vetor
void lerEArmazenarSequencia(FILE *arquivo, int vetor[], int *tamanho) {
    int numero;
    *tamanho = 0;

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        vetor[*tamanho] = numero;
        (*tamanho)++;
    }
}

// Função para apresentar um vetor na tela
void apresentarVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    FILE *arquivo;
    int vetor1[100]; // Vetor para a primeira sequência
    int vetor2[100]; // Vetor para a segunda sequência
    int tamanho1 = 0; // Tamanho da primeira sequência
    int tamanho2 = 0; // Tamanho da segunda sequência

    arquivo = fopen("sequencias.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    lerEArmazenarSequencia(arquivo, vetor1, &tamanho1);
    lerEArmazenarSequencia(arquivo, vetor2, &tamanho2);

    fclose(arquivo);

    printf("Sequência 1 lida do arquivo:\n");
    apresentarVetor(vetor1, tamanho1);

    printf("Sequência 2 lida do arquivo:\n");
    apresentarVetor(vetor2, tamanho2);

    return 0;
}
