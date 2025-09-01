#include <iostream>

using namespace std;

int main(){
    int p, d1, d2, r;


cin>> p >> d1 >> d2;

if(p == 0 && (d1+d2)%2 == 0){
    r = 0;
} 

if(p == 0 && (d1+d2)%2 != 0){
    r = 1;
} 

if(p == 1 && (d1+d2)%2 == 0){
    r = 1;
}

if(p == 1 && (d1+d2)%2 != 0){
    r = 0;
}



cout << r << endl;

    return 0;

}