#include <iostream>

using namespace std;

int main(){
    int n;
    int resultado = 1;

    cin >> n;

    while (n > 0)
    {
        resultado = resultado * n;
        n--;
    }
    
    cout << "O fatorial é: " << resultado << endl;

    return 0;
}