#include <bits/stdc++.h>
using namespace std;

int main(){
    int c1, l1, c2, l2;
    cin >> c1 >> l1 >> c2 >> l2;

    int a1 = c1 * l1;
    int a2 = c2 * l2;

    if (a1 > a2)
    {
        cout << a1 << "\n";
    } else {
        cout << a2 << "\n";
    }
    



    return 0;
}