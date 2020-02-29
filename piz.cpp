#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    double a, b, x, y;
    cin >> a >> b >> x >> y;
    double pricea, priceb;
    pricea = x / (a*a * M_PI);
    priceb = y / (b*b * M_PI);
    if (pricea < priceb)
    {
        cout << "MNIEJSZA";
    }
    else
    {
        cout << "WIEKSZA";
    }
    return 0;
}
