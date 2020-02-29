#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    int max_c = 0;
    int c = 0;
    int input;
    for(int i = 0; i < t; i++)
    {
        cin >> input;
        if(input == 0)
        {
            max_c = max(max_c, c);
            c = 0;
        }
        else 
        {
            c++;
        }
    }
    max_c = max(max_c, c);
    cout << max_c;
    return 0;
}
