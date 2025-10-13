#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, r, t;
    cin >> p >> r >> t;

    

    vector<int>seq;
    seq.push_back(p);
    int total = p;

    int i = 0;
    while (true)
    {
        int next = seq[i] * r;
        
        if (total + next >= t)
            break;
        
        seq.push_back(next);
        total = total + next;

        i++;
    }
    
    
    cout << seq.size() << "\n";

    return 0;
}