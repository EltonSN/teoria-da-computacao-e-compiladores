#include <stdio.h>
#include <stdlib.h>

// Fun��o recursiva para calcular a pot�ncia de x elevado a y
int potencia(int x, int y) {
    if (y == 1) {
        return x;
    } else if (y == 0) {
        return 1;
    } else {
        return x * potencia(x, y - 1);
    }
}

// Fun��o recursiva para calcular a soma dos n�meros naturais de 1 at� n
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

    // Calcula a pot�ncia de x elevado a y usando a fun��o potencia
    resultado = potencia(x, y);
    printf("O resultado de %d elevado a %d � %d", x, y, resultado);

    // Calcula a soma dos n�meros naturais de 1 at� y usando a fun��o somaNaturais
    resultado = somaNaturais(y);
    printf("\nO resultado da soma dos n�meros naturais de 1 at� %d � %d", y, resultado);

    return 0;
}
