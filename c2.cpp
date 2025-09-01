#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);

    int x, y;
    while(cin >> x >> y) {
        cout << x + y << endl; // endline é uma abstração de fim de linha
    }

    return 0;
}