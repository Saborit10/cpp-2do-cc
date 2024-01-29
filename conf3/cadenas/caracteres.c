#include <stdio.h>
#include <ctype.h>

int main()
{
    char contrasenna[] = "Casa.123";

    printf("contrasenna[0] es alfanumerico?: %d\n", isalnum(contrasenna[0]));
    printf("contrasenna[0] es una letra?: %d\n", isalpha(contrasenna[0]));
    printf("contrasenna[0] es una letra minuscula?: %d\n", islower(contrasenna[0]));
    printf("contrasenna[0] es un signo de puntuacion?: %d\n", ispunct(contrasenna[0]));
    printf("contrasenna[4] es un signo de puntuacion?: %d\n", ispunct(contrasenna[4]));
    printf("contrasenna[4] es un digito?: %d\n", isdigit(contrasenna[4]));
    printf("contrasenna[5] es un digito?: %d\n", isdigit(contrasenna[5]));

    return 0;
}