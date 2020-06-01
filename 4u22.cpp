#include <bits/stdc++.h>
using namespace std;
int main()
{
  string bin;
  long long potega = 1, a = 0;
  cin >> bin;
  if(bin[0] == '0')
  {
    for(int i = bin.size()-1; i >= 0; i--)
    {
        a += (int(bin[i]-48)*potega);
        potega *= 2;
    }
    cout << a;
  }
  else
  {
    for(int i = bin.size()-1; i >= 0; i--)
    {
        a += (int(bin[i]-48)*potega);
        potega*=2;
    }
    cout << a-potega;
  }
}
