#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;


    if (p == 1) {
        cout << 1 << "\n";
        return 0;
    }

    int t = 1;
    int count = 0;

    while (t <= n) {
        t = t * p;
        if (t <= n) {
            count++;
        }
    }

    cout << count << "\n";  
    

    return 0;
}