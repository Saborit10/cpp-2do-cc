#include "trabajador.h"

float calc_aporte_ss(Trabajador t)
{
    if (t.salario > 5000)
        return t.salario * 0.05;
    else
        return t.salario * 0.03;
}
