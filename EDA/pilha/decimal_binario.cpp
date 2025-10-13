#include <bits/stdc++.h>
using namespace std;

string decimalParaBinario(int numero) {
    stack<int> pilha;
    
    //aqui calculamos de tras para frente
    while (numero > 0) {
        pilha.push(numero % 2);
        numero /= 2;
    }

    //precisa-se desempilhar para ficar na ordem correta
    
    string binario = "";
    while (!pilha.empty()) {
        binario += to_string(pilha.top());
        pilha.pop();
    }
    
    return binario;
}

int main() {
    int n;
    cin >> n;
    cout << "Binario: " << decimalParaBinario(n) << endl;
    
    return 0;
}