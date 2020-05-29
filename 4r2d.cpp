#include<bits/stdc++.h>
using namespace std;
int w(char znak)
{
   if (znak == 'I') return 1;
   else if (znak == 'V') return 5;
   else if (znak == 'X') return 10;
   else if (znak == 'L') return 50;
   else if (znak == 'C') return 100;
   else if (znak == 'D') return 500;
   else if (znak == 'M') return 1000;
   else return 0;
}
int rom2dec(string x)
{
   int sum = 0;
   for (int i = 0; i < int(x.size()); i++)
   {
      int s1 = w(x[i]);
      if ((i+1) < int(x.size()))
      {
         int s2 = w(x[i+1]);
         if (s1 >= s2) sum = sum + s1;
         else
         {
            sum = sum + s2 - s1;
            i++;
         }
      }
      else sum = sum + s1;
   }
   return sum;
}
int main()
{
    string in;
    cin >> in;
    cout << rom2dec(in);
    return 0;
}
