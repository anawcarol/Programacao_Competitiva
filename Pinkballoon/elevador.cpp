#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vs;

    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;

        vs.emplace_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (vs[i- 1] != i)
        {
            cout << i << endl;
            break;
        }
        
    }
    
    




    return 0;
}