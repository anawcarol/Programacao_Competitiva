#include <bits/stdc++.h>

using namespace std;

int verifica(vector<int> vetor)
{
    unordered_set<int> elementosUnicos; // Cria um conjunto vazio
    for (int num : vetor)
    {                                // Percorre cada número do vetor
        elementosUnicos.insert(num); // Insere no conjunto
    }
    return elementosUnicos.size(); // Retorna o tamanho do conjunto
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int k = verifica(vec);
    cout << k << "\n";
    return 0;
}


