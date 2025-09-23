#include <iostream>
#include <deque>
#include <vector>

using namespace std;

//Insersão em filas monótonas

/*
Fila monótona/pilha monótona é uma estrutura de dados, onde os elementos do início ao fim, são sem-
pre crescentes ou decrescentes, ela mantem uma direção constante de ordenação
*/

template<typename T>
class MonoQueue{
public:
/*
1. Remove elementos maiores: enquanto a fila nao estiver vazia E o último elemento for maior que o no-
vo elemento x
2. Remove esses elementos do final com pop_back()
3. Adiciona o novo elemento no final com emp.ace_back(x)
BASICAMENTE: verifica se o ultimo elemento é maior que x, caso seja ele sai e x entre no lugar, isso até
a fila ficar vazia
*/
    void push(const T& x)
    {
        while (not st.empty() and st.back() > x)
            st.pop_back();

        st.emplace_back(x);

    }

    void pop() { st.pop_front(); }; //remove do início
    T back() const { return st.back(); } //primeiro elemento
    T front() const { return st.front(); } // último elemento
    bool empty() const { return st.empty(); } // verifica se está vazia

private:
    deque<T> st;
};

template<typename T>
ostream& operator<<(ostream& os, const MonoQueue<T>& ms)
{
    auto temp(ms); //Faz uma cópia para nao modificar a original

    while (not temp.empty())
    {
        cout << temp.front() << ' ';
        temp.pop(); //Remove elementos ao imprimir
    }

    return os;
}


int main(){
    vector<int> as {1, 4, 3, 4, 2, 1, 3 };
    MonoQueue<int> mq;

    for (auto& a : as){
        mq.push(a);
        cout << mq << '\n'; //Imprime o estado após cada insesrção
    }

    return 0;
}


// Aplicação de Filas Monótonas em Janela Móvel (Sliding Window)

/*
    problema clássico: encontrar o mínimo em janeja de tamanho K:
    dado um array e um inteiro k, queremos para cada posição i encontrar o elemento mínimo na janela [i, i+k-1]

*/