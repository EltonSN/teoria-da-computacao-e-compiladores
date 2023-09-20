#include <stdio.h>
#include <math.h> //biblioteca para usar a constante M_PI

int main() {
    int numero; 
    
    printf("Infrome um número: ");
    scanf("%d", &numero);
    
    // calcula a tabuada de multiplicação
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}