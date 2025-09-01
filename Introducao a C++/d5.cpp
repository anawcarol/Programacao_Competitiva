#include <iostream>

using namespace std;

int main(){
    int idade, renda;

    cout << "Digite sua idade e sua renda: " << idade << " " << renda << endl;

    if (idade >= 21 && renda <= 1200)
    {
        cout << "Você é elegível para o programa de assistência social." << endl;
    } else {
        cout << "Você não é elegível para o programa de assistência social." << endl;
    }
    

    return 0;
}