#include <iostream>
using namespace std;

int main() {
    int p, r;
    cin >> p >> r;

    cout << (p == 0 ? "C" : (r == 0 ? "B" : "A")) << "\n";
    return 0;
}