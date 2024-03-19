#include <iostream>
#include <string>

int main() {
    std::string S;

    std::cin >> S;

    // Primer Caracter
    std::cout << S.front() << std::endl;


    // Ultimo Caracter
    std::cout << S.back() << std::endl;


    // Convertir a una cadena de C
    const char* sPtr = S.c_str();
    printf("%s\n", sPtr);


    // Acceder a los caracteres individualmente
    for (int i = 0; i < S.size(); i++)
        std::cout << "El caracter en la posicion " << i << " es " << S[i] << std::endl;


    // Agregar caracteres o cadenas al final
    S += "hij";
    S.append(3, 'k'); // tres copias de k


    // Imprimir la cadena normalmente
    std::cout << S << std::endl;


    // Si comienza con "abcdef" (C++20)
    std::cout << S.starts_with("abcdef") << std::endl;


    // Si termina con "abcdef" (C++20)
    std::cout << S.ends_with("kk") << std::endl;


    // La cadenas pueden copiarse asignandolas
    auto copiaS = S;


    // Retorna una subcadena con los caracteres en el rango 
    // [pos, pos + count) or [pos, size()).
    std::cout << copiaS.substr(2, 4) << std::endl;

}