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
int main()
{
  int n, x, a;
  cin>>n>>x;
  string bin;
  a=x;
  if(x >= 0)
  {
    while(x!=0)
    {
        if(x%2==0)
        {
            bin = '0' + bin;
        }
        else
        {
            bin = '1' + bin;
        }
        x /= 2;
    }
  }
  else
  {
      int th = 128 + x;
      bin = dec2bin(th);
  } 
  int d = 0;
    if(x<0) d=1;
    if(bin.size() >= n*8)
    {
        cout << "ERROR";
    }
    else
    {
        while(bin.size()+d < n*8)
        {
            bin = '0' + bin;
        }
        if(x<0) bin = '1' + bin;
        cout << bin;
    }
}
