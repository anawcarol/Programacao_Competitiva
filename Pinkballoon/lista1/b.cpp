#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, d1, d2;

    cin >> p >> d1 >> d2;
    int r = d1 + d2;

    if ((p == 0 && r%2 == 0) || (p == 1 && r%2 != 0))
    {
        cout << "0" << "\n";
    } else {
        cout << "1" << "\n";
    }
    

    return 0;
}