#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    stack<int> pilha;
    for (int i = 0; i < n; i++)
    {
        int valor;
        cin >> valor;
        pilha.push(valor);
        if (pilha.top() == 0)
        {
            pilha.pop();
            pilha.pop();
        }
    }

    
    int soma = 0;
    while (!pilha.empty()){
        
        soma += pilha.top();
        pilha.pop();
    }

    cout << soma << endl;

    return 0;
}


