#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> vec = { -2, -2, 0, 2, 3, 3, 3, 3, 7 };

    // Calcular la posicion del primer 3
    // lower bound: returns an iterator to the first element not less than the given value
    auto it_lower = lower_bound(vec.begin(), vec.end(), 3);
    cout << it_lower - vec.begin() << endl;

    // Calcular la posicion del ultimo 3
    // upper_bound: returns an iterator to the first element greater than a certain value
    auto it_upper = upper_bound(vec.begin(), vec.end(), 3);
    cout << it_upper - vec.begin() - 1 << endl;

    // Cantidad de 3 en tiempo O(log n)
    cout << it_upper - it_lower << endl;

    // Esta' el elemento dentro del vector?
    cout << binary_search(vec.begin(), vec.end(), 5) << endl;

    // Maximo
    cout << *max_element(vec.begin(), vec.end()) << endl;

    // Minimo
    cout << *min_element(vec.begin(), vec.end()) << endl;

}