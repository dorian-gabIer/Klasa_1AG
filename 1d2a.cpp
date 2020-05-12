#include <bits/stdc++.h>
using namespace std;
string dec2all(int x, int s)
{
    string res;
    while(1)
    {
        if(x==0) break;
        if(x%s == 0)
        {
            res = '0' + res;
            x /= s;
        }
        if((x-1)%s == 0)
        {
            res = '1' + res;
            x -= 1;
            x /= s;
        }
        if((x-2)%s == 0)
        {
            res = '2' + res;
            x -= 2;
            x /= s;
        }
        if((x-3)%s == 0)
        {
            res = '3' + res;
            x -= 3;
            x /= s;
        }
        if((x-4)%s == 0)
        {
            res = '4' + res;
            x -= 4;
            x /= s;
        }
    }
    return res;
}
int main()
{
    int x, s;
    cin >> s >> x;
    cout << dec2all(x, s);
    return 0;
}
