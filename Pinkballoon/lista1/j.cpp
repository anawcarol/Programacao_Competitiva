#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, p, m;
    cin >> n;
    int x[n];
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] == 1)
        {
            contador++;
        }
    }

    // 1 = p e 2 = m
    // o contador ta contando a quantidade de p, entao n - contador conta a quantidade de m
    cin >> p >> m;

    if (contador == p && (n - contador) == m)
    {
        cout << "S" << "\n";
    } else {
        cout << "N" << "\n";
    }
    



    return 0;
}

