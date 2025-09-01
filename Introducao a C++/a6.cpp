#include <iostream>
#include <cmath>

using namespace std;

int calcula(int x){
    
    int resultado = std::pow(x, 2) - 3*x + 5;
    return resultado;

}

int main(){
    int n;

    cin >> n;

    int resultado = calcula(n);

    cout << "O resultado da função é: " << resultado << endl;
    
}