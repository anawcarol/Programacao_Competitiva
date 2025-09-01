#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    media = (nota1 + nota2) / 2;

    if (media >= 5.0)
    {
        cout << "Aprovado!" << endl;
    } else {
        cout << "Reprovado!" << endl;
    }
    

    cout << "A média é: " << media << endl;


    return 0;
}