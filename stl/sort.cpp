#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::vector<int> vec;

    int* arr = (int*)malloc(n * sizeof(int));

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        vec.push_back(num);
        arr[i] = num;
    }

    // Ordena el vector y el arreglo
    std::sort(vec.begin(), vec.end());
    std::sort(arr, arr + n);

    // Impirmimos los resultados
    for (int i = 0; i < n; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << std::endl;


    // Funcion lambda que sustituye el less
    std::function<bool(int, int)> f = [&](int a, int b) { return a > b; };


    // Ordenamos el vector y el arreglo de forma decreciente
    std::sort(vec.begin(), vec.end(), f);
    std::sort(arr, arr + n, f);

    // Impirmimos los resultados
    for (int i = 0; i < n; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << std::endl;

}