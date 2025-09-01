#include <iostream> 

using namespace std;
int main() {

    int a, b, c, m;

    cout << "Informe suas tres notas: " << endl;

    cin >> a >> b >> c >> m;

    int media = (a + b + c) / 3;

    cout << "A média é: " << media << endl;

    if (media >= m) {
        cout << "Aprovado!, acima da média" << endl;
    } else if (media == m) {
        cout << "Aprovado!, na média" << endl;
    } else
    {
        cout << "Reprovado!, abaixo da média" << endl;
    }
    



    return 0;
}