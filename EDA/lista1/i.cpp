#include <iostream>
using namespace std;

int main() {
    char j[6];

    int v=0;

    for (int i = 0; i < 6; i++)
    {
        cin >> j[i];

        if(j[i] == 'V'){
            v++;
        }
    }

    if(v >= 5){
        cout << "1" << endl;
    } else if (v >= 3){
        cout << "2" << endl;
    }  else if (v >= 1){
        cout << "3" << endl;
    } else {
        cout << "-1" << endl;
    }
    



    return 0;
}