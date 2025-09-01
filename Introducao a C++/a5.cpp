#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int soma = 0;
    int cont = 1;

   // while (cont < n)
   // {
   //     soma += cont;
   //     cont++;
   // }

    do
    {
        soma += cont;
        cont++;
    } while (cont < n);
    
    cout << "A soma dos numeros de zero até " << n << " é: " << soma << endl;
    

    return 0;
}