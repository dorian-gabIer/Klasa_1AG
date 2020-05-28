#include <bits/stdc++.h>
using namespace std;
string BS(string x)
{
    string res;
    for(auto i : x)
    {
        if(i != 32) res += i;
    }
    return res;
}
int main()
{
    string x;
    getline(cin, x);
    cout << BS(x);
    return 0;
}
