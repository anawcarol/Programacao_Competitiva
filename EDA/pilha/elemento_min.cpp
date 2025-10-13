#include <bits/stdc++.h>
using namespace std;

int elementoMinimo(stack<int> pilha) {
    if (pilha.empty()) {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
    
    int minElemento = INT_MAX; // Inicializa com o maior valor possível
    while (!pilha.empty()) {
        minElemento = min(minElemento, pilha.top()); //min(a, b)
        pilha.pop(); //remove o elemento do topo que nao seja o minimo
    }
    return minElemento;
}

int main() {
    stack<int> pilha;

    while (true) {
        int valor;
        cin >> valor;
        if (valor == -1) {
            break;
        } else {
            pilha.push(valor);  // push() para stack, não push_back()
        }
    }

    cout << "Elemento minimo: " << elementoMinimo(pilha) << endl;
    return 0;
}