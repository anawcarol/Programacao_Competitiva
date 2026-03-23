#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> resposta;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x = sqrt(a[i]);
        if (x * x != a[i]){
            resposta.push_back(a[i]);
        }
        
    }

    int maior = resposta[0]; //precisa ser assim, pois numeros negativos e o maior numero pode ser negativo, entao menor do que zero, entao nao pode ser zero

    for (int i = 0; i < resposta.size(); i++)
    {
        
        if (resposta[i] > maior)
        {
            maior = resposta[i];
        }
       
    }


    cout << maior << endl;

    return 0;
}
