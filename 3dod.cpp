#include <bits/stdc++.h>
using namespace std;
void ulamki(int a1, int b1, int a2, int b2)
{
    int wsp, wspil, mnb1, mnb2, c = 0;
    wsp = (b1*b2)/(__gcd(b1, b2));
    mnb1 = wsp / b1;
    mnb2 = wsp / b2;
    wspil = (a1*mnb1) + (a2*mnb2);
    while(wspil > wsp)
    {
        wspil -= wsp;
        c++;
    }
    mnb1 = __gcd(wspil, wsp);
    wspil /= mnb1;
    wsp /= mnb1;
    if(c == 0) cout << wspil << "/" << wsp;
    else cout << c << " " << wspil << "/" << wsp;
}
int main()
{
    int a1, b1, a2, b2, wsp, wspil, mnb1, mnb2;
    cin >> a1 >> b1 >> a2 >> b2;
    ulamki(a1, b1, a2, b2);
    return 0;
}
