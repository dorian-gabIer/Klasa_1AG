#include <bits/stdc++.h>
using namespace std;
string dec2bin(int n)
{
    string res;
    while(1)
    {
        if(n == 0) break;
        if(n%2 == 0)
        {
            res += "0";
            n /= 2;
        }
        else
        {
            res += "1";
            n-= 1;
            n /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
string dec2u1(int n)
{
    string res, bin;
    if(n>=0)
    {
        bin = dec2bin(n);
        res = bin;
    }
    else {
        bin = dec2bin(-n);
        for(auto x : bin)
        {
            if(x == '1') res += '0';
            if(x == '0') res += '1';
        }
    }
    while (res.size() < 8) res = '0' + res;
    return res;
}
int main()
{
    int i, n;
    cin >> i >> n;
    string res = dec2u1(n);
    int size = res.size();
    if(8*i <= size) cout << res;
    else cout << "ERROR";
    return 0;
}
