#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, r;
    cin >> p >> r;

    if (p == 1 && r == 1)
    {
        cout << "A" << "\n";
    } else if(p == 1 && r == 0) {
        cout << "B" << "\n"; 

    } else if(p == 0 && r == 1) {
        cout << "C" << "\n";

    } else if(p == 0 && p == 0) {
        cout << "C" << "\n";

    }
    
    



    return 0;
}