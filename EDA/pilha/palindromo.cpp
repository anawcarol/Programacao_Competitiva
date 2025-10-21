#include <bits/stdc++.h>
using namespace std;

string verificarPalavra(string expressao) {
    stack<char> pilha;
    string resultado;
    
    for (char c : expressao) {
        pilha.push(c);
    }
    while (!pilha.empty())
    {
        resultado.push_back(pilha.top());
        pilha.pop();   

    }

    return resultado;
    
}

int main() {
    int n;
    cin >> n;

    string palavra;
    cin >> palavra;

    string inverte = verificarPalavra(palavra);

    if (inverte == palavra)
    {
        cout << "1" << "\n";
    } else {
        cout << "0" << "\n";
    }
    

    return 0;
}