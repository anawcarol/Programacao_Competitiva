#include <iostream>

using namespace std;


int main(){
    int n, p, c = 0;

    cin >> n >> p;

    int t = 1;
    
    while (t * p <= n) //entao o total de bacterias vezes o fator de multiplicacao deve ser menor que a capacitade do recipiente 
    {
        t = t * p;
        c++;
    }
    
    cout << c << endl;

    return 0;
}