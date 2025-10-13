#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, gasto, saldo = 0;
    cin >> x >> n;
    
    while (n > 0) {
        cin >> gasto;
        saldo += x - gasto;
        n--;
    }
    
    cout << saldo + x << "\n";
    return 0;
}

//outra forma:

/*int main(){
    int x, n;

    cin >> x >> n;
    int m[n];

    //temos a cota inicial x
    //primeiro ele gasta m
    //soma o que sobra soma com x para o proximo mes

    int primeiro;
    cin >> primeiro;
    m[0] = x - primeiro;

    for (int i = 1; i < n; i++)
    {
        int inicio;
        cin >> inicio;
        m[i] = m[i-1] + x - inicio;
        
    }
    
    int total = m[n-1] + x;

    cout << total << "\n";
    return 0;
}*/