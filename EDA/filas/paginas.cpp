#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, n;
    cin >> q >> n;

    vector<int> seq(n);


    queue<int> fila;
    int count = 0;

    /*
    O que é unordered_set<int> mem;
    É uma estrutura de dados da STL (Standard Template Library) do 
    C++ que funciona como um conjunto de valores únicos — sem ordem 
    definida e com busca muito rápida.
    */

   unordered_set<int> mem;

    for (int i = 0; i < n; i++)
    {
        int pagina = seq[i];

        if (mem.find(pagina) != mem.end()) {
            continue;
        }
        if (fila.size() == q)
        {
            fila.pop();
            count++;
        }
        fila.push(seq[i]);

    }
    
    cout << count << endl;
    
    



    return 0;
}


