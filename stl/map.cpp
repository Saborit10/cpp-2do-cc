#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    map<string, int> m;

    vector<string> nombres = { "Anacleto", "Eleuterio", "Eutiquiano", "Alejandro VI" };
    vector<int> numeros = { 3, 13, 27, 214 };

    // Insertamos en el map
    for (int i = 0; i < nombres.size(); i++)
        m[nombres[i]] = numeros[i];

    // Cantidad de elementos
    cout << m.size() << endl;

    // Menor clave y menor valor
    cout << m.begin()->first << endl;
    cout << m.begin()->second << endl;

    // Mayor clave y mayor valor
    auto it = m.end();
    it--;
    cout << it->first << endl;
    cout << it->second << endl;

    // Buscar una clave y su valor correspondiente
    if (m.contains("Alejandro VI"))
        cout << m["Alejandro VI"] << endl;
    else
        cout << "No esta en la lista!\n";

}