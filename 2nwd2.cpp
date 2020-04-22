#include <iostream>
using namespace std;
int nwdeu2(int a, int b)
{
    int c;
    while(1)
    {
        if(b == 0) return a;
        c = a%b;
        a = b;
        b = c;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << nwdeu2(a, b);
    return 0;
}
