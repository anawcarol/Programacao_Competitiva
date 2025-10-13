#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int soma = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        soma += x;
        
        // Quando atingir, imprime e para
        if (soma >= 1000000) {
            cout << i + 1 << "\n";
            return 0;  // Termina o programa
        }
    }

    // Se chegou aqui, nunca atingiu
    cout << "-1\n";
    return 0;
}