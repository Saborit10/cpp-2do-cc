#include <iostream>
#include <stack>

int main() {
    int n;
    std::stack<int> K;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;

        // Meter en la pila
        K.push(x);
    }

    // Mientras no este vacia
    while (!K.empty()) {
        // Se accede al elemento del tope
        std::cout << K.top() << std::endl;

        // Se elimina el elemento del tope
        K.pop();
    }
}