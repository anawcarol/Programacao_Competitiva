#include <iostream>
#include <algorithm> 

using namespace std;

int main (){
    int n;
    cin >> n;
    int s[n+1];
    cin >> s[0];

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        
        s[i] = s[i-1] + s[i];
    }
    
    sort(s, s + n + 1); 

    cout << s[0] << endl;

    return 0;
}
