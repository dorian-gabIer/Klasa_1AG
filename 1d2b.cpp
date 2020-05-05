#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(1)
    {
        if(n == 0) break;
        if(n%2 == 0)
        {
            cout << "0" << endl;
            n /= 2;
        }
        else
        {
            cout << "1" << endl;
            n-= 1;
            n /= 2;
        }
    }
}
