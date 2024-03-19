#include <iostream>
#include <queue>
#include <array>

int main() {
    std::array<double, 4> arreglo = { 1.1, 2.3, 0.6, 4.6 };

    std::priority_queue<double> Q;

    // Insertamos los elementos del arreglo en la cola de prioridad
    for (auto x : arreglo)
        Q.push(x);

    while (!Q.empty()) {
        // Accedemos al elemento que mayor prioridad tiene
        std::cout << Q.top() << std::endl;

        // Eliminamos el elemento que mayor prioridad tiene
        Q.pop();
    }
}