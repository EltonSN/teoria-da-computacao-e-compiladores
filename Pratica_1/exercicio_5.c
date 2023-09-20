#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor, area;
  
    printf("Digite a diagonal maior do losangulo: ");
    scanf("%f", &diagonalMaior);
  
    printf("Digite a diagonal menor do losangulo: ");
    scanf("%f", &diagonalMenor);
  
    area = (diagonalMaior * diagonalMenor) / 2;
  
    printf("A área do losango é: %.2f\n", area);
  
    return 0;
}
