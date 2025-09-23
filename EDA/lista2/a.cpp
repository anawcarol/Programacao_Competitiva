#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> notas(n);
    for (int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    // Ordena em ordem decrescente
    sort(notas.begin(), notas.end());
    reverse(notas.begin(), notas.end());

    // A nota de corte é a nota do K-ésimo colocado
    cout << notas[k-1] << endl;

    return 0;
}