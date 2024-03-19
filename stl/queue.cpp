#include <iostream>
#include <queue>

int main() {
    int n;
    std::queue<int> Q;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;

        // Meter en el final de la cola
        Q.push(x);
    }

    // Mientras no este vacia
    while (!Q.empty()) {
        // Se accede al primer elemento de la cola
        std::cout << Q.front() << std::endl;

        // Se elimina el primer elemento de la cola
        Q.pop();
    }
}