#include <stdio.h>

int main()
{
    char contrasenna[] = "Casa.123";

    for (int i = 0; contrasenna[i] != '\0'; i++)
        printf("El caracter en la posicion %d es '%c'\n", i, contrasenna[i]);

    return 0;
}