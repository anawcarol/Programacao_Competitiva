#include <iostream>
using namespace std;

int main() {
    int p, d1, d2;
    cin >> p >> d1 >> d2;

    int r = p ^ ((d1 + d2) % 2); // XOR direto

    cout << r << endl;
    return 0;
}
