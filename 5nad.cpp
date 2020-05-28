#include <bits/stdc++.h>
#include <cctype>
using namespace std;
string ND(string x)
{
    string res;
    for(auto i : x)
    {
        res += toupper(i);
    }
    return res;
}
int main()
{
    string x;
    getline(cin, x);
    cout << ND(x);
    return 0;
}
