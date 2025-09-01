#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    cout << x + y << endl; //endline é uma abstracao de fim de linha
    //Quando escrevemos para um IOStream (terminal, arquivo, etc) nem 
    //sempre a escrita realmente é feita caractere por caractere ou linha 
    //por linha. Imagina ter que escrever caractere por caractere no disco. 
    //Então uma técnica que se usa é usar um buffer, que é um pedaço de memória 
    //onde se vai construindo aquilo que queremos salvar. Quando esse buffer 
    //encher é realizado o flush, que é a real escrita para o IOStream.



    return 0;
}