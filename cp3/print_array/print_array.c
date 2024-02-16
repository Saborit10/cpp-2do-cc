#include <stdio.h>

void imprimir_arreglo(double *arr, int cant_elems)
{
    printf("[");

    for (int i = 0; i < cant_elems; i++)
    {
        if (i == cant_elems - 1)
            printf("%.2lf]", arr[i]);
        else
            printf("%.2lf, ", arr[i]);
    }
}

int main()
{

    int n;
    double A[20];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &A[i]);

    imprimir_arreglo(A, n);

    return 0;
}