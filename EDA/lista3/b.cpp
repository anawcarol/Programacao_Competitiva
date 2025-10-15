#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int balance = 0;
    int minBalance = 0;
    
    // Uma única passada para calcular o que falta
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        minBalance = min(minBalance, balance);
    }
    
    // Calcular quantos '(' e ')' precisamos adicionar
    int addAbrir = -minBalance;        // '(' no início
    int addFechar = balance + addAbrir; // ')' no final
    
    // Construir resposta diretamente
    string resultado = string(addAbrir, '(') + s + string(addFechar, ')');
    
    cout << resultado << "\n";
    return 0;
}