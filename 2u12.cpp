#include <bits/stdc++.h>
using namespace std;
int main()
{
  string bin;
  int potega = 1, a = 0;
  cin >> bin;
  if(bin[0]=='0')
  {
    for(int i=bin.size()-1; i>=0; i--)
    {
        a=a+int(bin[i]-48)*potega;
        potega*=2;
    }
    cout<<a;
  }
  else
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
    for(int i=bin.size()-1; i>=0; i--)
    {
      a = a + int(bin[i]-48)*potega;
      potega *= 2;
    }
    a *= (-1);
    cout<<a;
  }
}
