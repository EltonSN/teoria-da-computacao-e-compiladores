#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular a potência de x elevado a y
int potencia(int x, int y) {
    if (y == 1) {
        return x;
    } else if (y == 0) {
        return 1;
    } else {
        return x * potencia(x, y - 1);
    }
}

// Função recursiva para calcular a soma dos números naturais de 1 até n
int somaNaturais(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    } else {
        return n + somaNaturais(n - 1);
    }
}

int main() {
    int x, y, resultado;
    x = 3;
    y = 5;

    // Calcula a potência de x elevado a y usando a função potencia
    resultado = potencia(x, y);
    printf("O resultado de %d elevado a %d é %d", x, y, resultado);

    // Calcula a soma dos números naturais de 1 até y usando a função somaNaturais
    resultado = somaNaturais(y);
    printf("\nO resultado da soma dos números naturais de 1 até %d é %d", y, resultado);

    return 0;
}
