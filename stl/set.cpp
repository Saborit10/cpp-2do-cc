#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    set<double> S;

    vector<double> vec = { 2.0, .5, 6, -2.6 };

    // Insertamos en el set
    for (auto x : vec)
        S.insert(x);

    // Cantidad de elementos
    cout << S.size() << endl;

    // Menor elemento
    cout << *S.begin() << endl;

    // Mayor elemento
    auto it = S.end();
    it--;
    cout << *it << endl;

    // Buscar los elementos en el set
    auto it1 = S.find(-2.6);
    if (it1 != S.end())
        cout << *it1 << endl;
    else
        cout << "El elemento no esta en el set!\n";

    auto it2 = S.find(-2.59995);
    if (it2 != S.end())
        cout << *it2 << endl;
    else
        cout << "El elemento no esta en el set!\n";

}