#include <bits/stdc++.h>

using namespace std;

// sintaxe básica: tipo nome[linhas][colunas];

int main()
{
    int colunas, linhas, valor;

    // Matriz 3x3 de inteiros
    int matriz[3][3];

    // Matriz 5x5 de doubles
    double notas[5][5];

    // Matriz 2x4 de caracteres
    char tabuleiro[2][4];

    // Matriz 2x3 inicializada
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // inicializa matriz com zeros:
    int matriz[100][100];
    memset(matriz, 0, sizeof(matriz)); // Preenche com zeros

    // Percorrendo por linhas (mais eficiente para cache)
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Percorrendo por colunas
    for (int j = 0; j < colunas; j++)
    {
        for (int i = 0; i < linhas; i++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Matriz dinâmica
    vector<vector<int>> matriz(linhas, vector<int>(colunas, valor));

    // Exemplo: Matriz 5x5 inicializada com -1
    vector<vector<int>> grid(5, vector<int>(5, -1));
    return 0;
}
