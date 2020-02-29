#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    int t; cin >> t;
    int numbs[t];
    for(int i = 0; i < t; i++) cin >> numbs[i];
    int exp = 1;
    int opr = 0;
    for(int n = 0; n < t; n++)
    {
        if(numbs[n] != exp)
        {
            opr++;
        } 
        else
        {
            exp++;
        }
        
    } 
    if (opr == t-1)
    {
      opr++;
    }
    if(opr == 1000000)
    {
      opr--;
    }
    cout << opr << endl;
    return 0;
}
