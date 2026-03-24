#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    string s;
    int n;

    cin >> s;
    cin >> n;

    if ((s == "front" && n == 1) || (s == "back" && n == 2))
    {
        cout << "L" << endl;
    }
    else
    {
        cout << "R" << endl;
    }

    return 0;
}