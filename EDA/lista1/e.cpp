#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a >= b && a <= c) || (a >= c && a <= b))
        cout << a << endl;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        cout << b << endl;
    else
        cout << c << endl;

    return 0;
}

/*
#include <iostream>
#include <algorithm> // sort

using namespace std;

int main() {
    int idades[3];
    cin >> idades[0] >> idades[1] >> idades[2];

    sort(idades, idades + 3); // ordena do menor pro maior

    cout << idades[1] << endl; 
    return 0;
}


*/