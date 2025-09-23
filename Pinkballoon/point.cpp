#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string reference = "unballoon";
    vector<int> cnt(100, 0);

    for (int i = 0; i < n; i++)
    {
        char c = reference[i];
        int pos = c - 'a';
        cnt[pos]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        int pos = c - 'a';
        ans += cnt[pos];
    }

    cout << ans << endl;
    
    


    return 0;
}