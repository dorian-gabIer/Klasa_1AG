#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    int t; cin >> t;
    int s[t];
    for(int i = 0; i < t; i++) cin >> s[i];
    int c = 0;
    for(int i = 1; i < t-1; i++)
    {
        if ((s[i-1] < s[i]) && (s[i] > s[i+1]))
        {
            c++;
        }
    }
    cout << c;
    return 0;
}
