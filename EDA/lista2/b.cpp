#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int p;

    cin >> p;
    int count = 0;

    for (int i = 0; i < p; i++)
    {
        int c;
        cin >> c;

        if (x[c - 1] != 0)
        {
            x[c - 1]--;
            count++;
        }

    }

    cout << count << "\n";

    return 0;
}