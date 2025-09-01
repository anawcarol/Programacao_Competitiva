#include <iostream>
#include <cmath>

using namespace std;



int main() {
    long long b, e, a;
    bool continuar = true;

    while (continuar) {
        cout << "Digite a base e o expoente: ";
        cin >> b >> e;

        a = pow(b, e);
        cout << "O resultado da potenciacao é: " << a << endl;

        cout << "Deseja continuar? (1 para sim, 0 para não): ";
        cin >> continuar;
    }

    cout << "Programa encerrado." << endl;
    return 0;
}
