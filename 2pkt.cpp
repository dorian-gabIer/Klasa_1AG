#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, smallx, smally, bigx, bigy;
    cin >> x1 >> y1 >> x2 >> y2;
    if(y1 > y2) cout << x2 << " " << y1 << " " << x1 << " " << y2;
    else cout << x1 << " " << y2 << " " << x2 << " " << y1;
    if(x1 > x2)
    {
        smallx = x2;
        bigx = x1;
    }
    else
    {
        smallx = x1;
        bigx = x2;
    }
    if(y1 > y2)
    {
        smally = y2;
        bigy = y1;
    }
    else
    {
        smally = y1;
        bigy = y2;
    }
    cout << "\n" << ((bigy-smally)*(bigx-smallx));
    return 0;
}
