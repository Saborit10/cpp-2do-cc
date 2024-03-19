#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> vec;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        vec.push_back(num);
    }


    // Esta vacio el vector?
    std::cout << vec.empty() << std::endl;


    // Cantidad de elementos
    std::cout << vec.size() << std::endl;


    // Acceso a los elementos igual que en los arreglos
    // (no se puede usar en todos los contenedores)
    for (int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;


    // Otra forma de recorrer el vector
    for (auto elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;


    // Eliminamos el ultimo elemento del arreglo
    vec.pop_back();


    // Recorrer el vector usando iteradores
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;


    // Acceder al primer elemento del arreglo
    std::cout << "Primer elemento: " << vec.front() << std::endl;


    // Acceder al primer elemento del arreglo (iteradores)
    std::cout << "Primer elemento: " << *vec.begin() << std::endl;


    // Acceder al ultimo elemento del arreglo
    std::cout << "Ultimo elemento: " << vec.back() << std::endl;


    // Acceder al ultimo elemento del arreglo (iteradores)
    std::vector<int>::iterator it = vec.end();
    it--;
    std::cout << "Ultimo elemento: " << *it << std::endl;

    // Eliminamos todos los elementos del vector
    vec.clear();

}