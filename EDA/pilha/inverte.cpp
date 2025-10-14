#include <bits/stdc++.h>
using namespace std;

string inverte(string str)
 {
    stack<char> pilha;
    for (char c : str) {
        pilha.push(c);
    }
    string resultado = "";
    while (!pilha.empty()) {
        resultado += pilha.top();
        pilha.pop();
    }
    return resultado;
}

int main() {
    string texto;
    cout << "Digite um texto: ";
    getline(cin, texto);
    cout << "Texto invertido: " << inverte(texto) << endl;
    return 0;
}