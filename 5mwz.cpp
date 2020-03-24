#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2, w, wx, wy;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    w = (a1*b2) - (b1*a2);
    wx = (c1*b2) - (b1*c2);
    wy = (a1*c2) - (c1*a2);
    if(w == 0)
    {
        if(wx == 0 && wy == 0) cout << "NIEOZNACZONY";
        else cout << "SPRZECZNY";
        return 0;
    }
    cout << wx/w << " " << wy/w;
    return 0;
}
