#include <stdio.h>

long long sumar_arreglo(int *arr, int cant_elems)
{
    long long suma = 0;

    for (int i = 0; i < cant_elems; i++)
        suma += arr[i];

    return suma;
}

int main()
{

    int n;
    int A[20];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("%lld\n", sumar_arreglo(A, n));

    return 0;
}