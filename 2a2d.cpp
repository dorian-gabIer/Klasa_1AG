#include <bits/stdc++.h>
using namespace std;
int pot(int x, int p)
{
    int res, i;
    res = 1;
    for (i=1; i <= p; i++) res *= x;
    return res;
}
long long all2dec(string x, int s)
{
    int temp2, a = 0;
    long long sum = 0;
    for(int i = x.size()-1; i >= 0; i--)
    {
        if(x[i] == 'A' or x[i] == 'B' or x[i] == 'C' or x[i] == 'D' or x[i] == 'E' or x[i] ==  'F')
        {
            switch(x[i])
            {
                case 'A':
                temp2 = 10;
                break;
                
                case 'B':
                temp2 = 11;
                break;
                
                case 'C':
                temp2 = 12;
                break;
                
                case 'D':
                temp2 = 13;
                break;
                
                case 'E':
                temp2 = 14;
                break;
                
                case 'F':
                temp2 = 15;
                break;
            }
        }
        else temp2 = x[i] - '0';
        sum += (temp2*pot(s, a));
        a++;
    }
    return sum;
}
int main()
{
    string x;
    int s;
    cin >> s >> x;
    cout << all2dec(x, s);
    return 0;
}
