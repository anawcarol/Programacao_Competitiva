#include <bits/stdc++.h>
using namespace std;

int main(){
    int c1, l1, c2, l2;
    cin >> c1 >> l1 >> c2 >> l2;

    int a1 = c1 * l1;
    int a2 = c2 * l2;

    if (a1 == a2)
    {
        cout << "0" << "\n";
    } else if (a2 > a1){
        cout << "1" << "\n";
    } else if (a2 < a1){
        cout << "-1" << "\n";
    }
    



    return 0;
}