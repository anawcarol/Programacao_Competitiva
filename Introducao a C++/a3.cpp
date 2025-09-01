#include <iostream>

using namespace std;

int somar(int a, int b){
    return a + b; // Função que recebe dois inteiros e retorna a soma deles
}

void escrever(){
    cout << "Hello, World!" << endl; // std é o namespace onde estão todas as coisas da biblioteca padrão de C++
}

int main(){

    escrever(); // Chama a função escrever que imprime "Hello, World!" na tela
    int resultado = somar(2, 3); // Chama a função somar com os argumentos 2 e 3, mas não faz nada com o resultado

    cout << "Resultado da soma: " << resultado << endl; // Imprime o resultado da soma na tela

    
    return 0;
}