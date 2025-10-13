#include <bits/stdc++.h>
using namespace std;

bool verificarParenteses(string expressao) {
    stack<char> pilha;
    
    for (char c : expressao) {
        if (c == '(') {
            pilha.push(c);
        } else if (c == ')') {
            if (pilha.empty()) return false;
            pilha.pop();
        }
    }
    
    return pilha.empty();
}

int main() {
    stack<int> pilha;
    
    // Push
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    
    cout << "Topo: " << pilha.top() << endl;
    
    // Pop
    pilha.pop();
    cout << "Novo topo após pop: " << pilha.top() << endl;
    
    // Tamanho
    cout << "Tamanho: " << pilha.size() << endl;
    
    // Verificar se está vazia
    cout << "Vazia? " << (pilha.empty() ? "Sim" : "Não") << endl;
    
    string expressao;
    cout << "Digite a expressão para verificar parênteses: ";
    cin >> expressao;
    
    bool balanceado = verificarParenteses(expressao);
    
    if (balanceado) {
        cout << "Os parênteses estão BALANCEADOS ✓" << endl;
    } else {
        cout << "Os parênteses NÃO estão balanceados ✗" << endl;
    }
    return 0;
}