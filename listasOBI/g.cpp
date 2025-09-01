#include <iostream>

using namespace std;


int main(){
    int n, p, c = 0;

    cin >> n >> p;

    int t = 2;
    
    while (t <= n)
    {
        t = t * p;
        c++;
    }
    
    cout << c << endl;

    return 0;
}