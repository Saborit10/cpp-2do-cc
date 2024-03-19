#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define fr first 
#define sc second

int main() {
    std::pair<std::string, int> p1 = { "Luis E", 3 };
    std::pair<int, double> p2(5, M_PI);

    // Acceder al primer par
    std::cout << "(" << p1.first << ", " << p1.second << ")\n";

    // Acceder al segundo par, usando los atajos
    std::cout << "(" << p2.fr << ", " << p2.sc << ")\n";

    // Cambiar la presicion de los numeros decimales 
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);

    // Acceder al segundo par, usando los atajos, con presicion 2
    std::cout << "(" << p2.fr << ", " << p2.sc << ")\n";


}