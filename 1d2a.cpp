#include <bits/stdc++.h>
using namespace std;
string dec2all(int x, int s)
{
    int i = 0, temp;
    int numbs[15000];
    string res;
    while(x != 0)
    {
        temp = x % s;
        x /= s;
        numbs[i] = temp;
        i++;
        temp = 0;
    }
    for(int z = i - 1; z >= 0; z--)
    {
        if(numbs[z] == 10) res += "A";
        else if(numbs[z] == 11) res += "B";
        else if(numbs[z] == 12) res += "C";
        else if(numbs[z] == 13) res += "D";
        else if(numbs[z] == 14) res += "E";
        else if(numbs[z] == 15) res += "F";
        else res += to_string(numbs[z]);
    }
    return res;
}
int main() 
{
  ios_base::sync_with_stdio(0);
  int s, x;
  cin >> s >> x;
  cout << dec2all(x, s);
  return 0;
}
