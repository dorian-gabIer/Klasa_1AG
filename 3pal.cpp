#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in, changedin;
    cin >> in;
    changedin = in;
    reverse(changedin.begin(), changedin.end());
    if(in == changedin) cout << "TAK";
    else cout << "NIE";
    return 0;
}
