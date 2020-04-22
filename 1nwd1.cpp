#include <iostream>
using namespace std;
int nwdeu(int a, int b)
{
    while(1)
    {
        if(a==b) return a;
        if(a > b) a -= b;
        if(a < b) b -= a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << nwdeu(a, b);
    return 0;
}
