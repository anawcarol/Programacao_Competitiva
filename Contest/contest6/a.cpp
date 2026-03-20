#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    stack<string> pilha;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string texto;
        cin >> texto;
        pilha.push(texto);
    }

    for (int i = 0; i < n; i++)
    {
        string texto = pilha.top();
        cout << texto << "\n";
        pilha.pop();
    }
    
    
    
    return 0;
}