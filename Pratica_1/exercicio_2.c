#include <stdio.h>

int main() {
    int anoNasc, anoAtual, idadeAtual, idadeFutura;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNasc);
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    idadeAtual = anoAtual - anoNasc;
    idadeFutura = 2050 - anoNasc;
    
    printf("Sua idade atual é: %d\n", idadeAtual);
    printf("E sua idade em 2050 será de: %d\n", idadeFutura);

    return 0;
}