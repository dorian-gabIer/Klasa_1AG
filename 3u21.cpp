#include <bits/stdc++.h>
using namespace std;
string dec2bin(int n)
{
    string res;
    while (1)
    {
        if (n == 0) break;
        if (n % 2 == 0)
        {
            res += "0";
            n /= 2;
        }
        else
        {
            res += "1";
            n -= 1;
            n /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string res;
    int x, n;
    bool minus = false;
    cin >> n >> x;
    if (x < 0)
    {
        x = pow(2, n * 8 - 1) + x;
        minus = true;
    }
    if (x < 0) cout << "ERROR";
    else
    {
        res = dec2bin(x);
        while (res.size() < ((n * 8) - 1)) res = '0' + res;
        res = (minus?'1':'0') + res;
        if (res.size() > n * 8) cout << "ERROR";
        else cout << res;
    }
    return 0;
}
