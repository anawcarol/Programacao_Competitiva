#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a = 0, b = 0;
    cin >> n;
    int x[n];
    int contador;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (x == 1) {
            // Inverte apenas o bit A (XOR com 1)
            a ^= 1;
        } else if (x == 2) {
            // Inverte ambos os bits A e B (XOR com 1 em ambos)
            a ^= 1;
            b ^= 1;
        }
    }

    /*
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] == 1 && a == 0){
            a = 1;
        } else if (x[i] == 1 && a == 1){
            a = 0;
        } else if (x[i] == 2 && a == 0 && b == 0){
            a = 1;
            b = 1;
        } else if (x[i] == 2 && a == 1 && b == 0){
            a = 0;
            b = 1;
        } else if (x[i] == 2 && a == 0 && b == 1){
            a = 1;
            b = 0;
        } else if (x[i] == 2 && a == 1 && b == 1){
            a = 0;
            b = 0;
        } 
    */
    
        
    

    
    cout << a << "\n" << b << "\n";
    


    return 0;
}


