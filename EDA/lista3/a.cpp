#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    string num;
    num.resize(n);
    cin >> num;
    int conta= 0;
    int contb= 0;

    for (char c : num) {
        if (c == '1')
        {
            conta++;
        } else if(c == '0') 
        {
            contb++;
        }
    
    }

    if (conta == contb)
    {
        cout << "0" << "\n";
    } else {
        cout << abs(conta - contb) << "\n";
    }
    

    


    return 0;
}


