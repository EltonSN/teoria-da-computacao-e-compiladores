#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere = 'E';

    if (isalpha(caractere)) {
        printf("%c - é uma letra.\n", caractere);
    } else {
        printf("%c - não é uma letra.\n", caractere);
    }

    if (isdigit(caractere)) {
        printf("%c - é um dígito.\n", caractere);
    } else {
        printf("%c - não é um dígito.\n", caractere);
    }

    if (isupper(caractere)) {
        printf("%c - é uma letra maiúscula.\n", caractere);
    } else {
        printf("%c - não é uma letra maiúscula.\n", caractere);
    }

    if (islower(caractere)) {
        printf("%c - é uma letra minúscula.\n", caractere);
    } else {
        printf("%c - não é uma letra minúscula.\n", caractere);
    }

    if (isalnum(caractere)) {
        printf("%c - é uma letra ou um dígito.\n", caractere);
    } else {
        printf("%c - não é uma letra ou um dígito.\n", caractere);
    }

    return 0;
}
