#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int base = 1;
        vector<int> resposta;

        while (n > 0)
        {

            int digito = n % 10;

            if (digito != 0)
            {
                int redondo = digito * base;
                resposta.push_back(redondo);
            }

            n = n / 10;
            base = base * 10;
        }

        cout << resposta.size() << endl;
        for (int j = 0; j < resposta.size(); j++)
        {
            cout << resposta[j] << " ";
        }
        cout << endl;

        
    }

    return 0;
}
