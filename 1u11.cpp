#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, a;
  cin>>n>>x;
  string bin;
  a=x;
  while(x!=0)
  {
    if(x%2==0)
    {
      bin='0'+bin;
    }
    else
    {
      bin = '1' + bin;
    }
    x /= 2;
  }
  if(bin.size()>=n*8)
  {
    cout<<"ERROR";
  }
  else
  {
    while(bin.size()<n*8)
    {
      bin='0'+bin;
    }
    if(a<0)
    {
        for(int i=0; i<bin.size(); i++)
        {
            if(bin[i]=='0')
            {
                bin[i]='1';
            }
            else
            {
                bin[i]='0';
            }
        }
    }
    cout << bin;
  }
}
