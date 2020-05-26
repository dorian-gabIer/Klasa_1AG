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
string dec2u1(int i, int n)
{
    i *= 8;
    string res, bin, res2;
    if(n>=0)
    {
        bin = dec2bin(n);
        res = bin;
        while (res.size() < i) res = '0' + res;
        if(res.size() > i) return "ERROR";
        return res;
    }
    else {
        bin = dec2bin(-n);
        res = bin;
        while (res.size() < i) res = '0' + res;
        if(res.size() > i) return "ERROR";
        for(auto x : res)
        {
            if(x == '1') res2 += '0';
            if(x == '0') res2 += '1';
        }
        return res2;
    }
}
int main()
{
    int i, n;
    cin >> i >> n;
    string res = dec2u1(i, n);
    cout << res;
    return 0;
}
