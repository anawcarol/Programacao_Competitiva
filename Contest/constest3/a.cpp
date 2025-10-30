#include <bits/stdc++.h>
using namespace std;

int verificarPalavra(string expressao) {
    stack<char> pilha;
    string resultado;
    
    for (char c : expressao) {
        pilha.push(c);
    }

    while (!pilha.empty() && pilha.top() != 'a')
    {
        pilha.pop();   

    }
    
    if (pilha.empty()) { 
        return 0;
    }

    return pilha.size();
    
}

int main() {

    string palavra;
    cin >> palavra;

    int tamanho = verificarPalavra(palavra);
    
    if (tamanho == 0)
    {
        cout << "-1" << "\n";
    } else {
        cout << tamanho << "\n";
    }
    
    

    return 0;
}