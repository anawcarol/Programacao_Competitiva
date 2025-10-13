#include <bits/stdc++.h>
using namespace std;


int main() {
    //estudo pilha
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


    return 0;
}


