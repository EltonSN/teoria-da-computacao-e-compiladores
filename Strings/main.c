#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere = 'E';

    if (isalpha(caractere)) {
        printf("%c - � uma letra.\n", caractere);
    } else {
        printf("%c - n�o � uma letra.\n", caractere);
    }

    if (isdigit(caractere)) {
        printf("%c - � um d�gito.\n", caractere);
    } else {
        printf("%c - n�o � um d�gito.\n", caractere);
    }

    if (isupper(caractere)) {
        printf("%c - � uma letra mai�scula.\n", caractere);
    } else {
        printf("%c - n�o � uma letra mai�scula.\n", caractere);
    }

    if (islower(caractere)) {
        printf("%c - � uma letra min�scula.\n", caractere);
    } else {
        printf("%c - n�o � uma letra min�scula.\n", caractere);
    }

    if (isalnum(caractere)) {
        printf("%c - � uma letra ou um d�gito.\n", caractere);
    } else {
        printf("%c - n�o � uma letra ou um d�gito.\n", caractere);
    }

    return 0;
}
