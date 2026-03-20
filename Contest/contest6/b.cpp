#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int valor;
            cin >> valor;
            if (valor % 2 != 0)
            {
                count++;
            }
        }
        cout << count << "\n";
        
    }
    
    
    
    
    return 0;
}