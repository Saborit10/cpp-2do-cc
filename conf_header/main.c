#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajador.h"

int main()
{
    Trabajador *trabajador = (Trabajador *)malloc(sizeof(Trabajador));

    char nombre[30];
    float salario;

    scanf(" %s%f", &nombre, &salario);

    strcpy(trabajador->nombre, nombre);
    trabajador->salario = salario;

    printf("La contribucion del trabajador %s debe ser %f\n", trabajador->nombre, calc_aporte_ss(*trabajador));
}