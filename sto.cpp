#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dl, sk, sm;
    bool now = false;
    cin >> dl >> sk >> sm;
    dl -= ((sk+sm)*((dl/(sk+sm))-1));
    while (dl >= 0)
    {
        now = !now;
        if (now) dl = dl - sk;
        if (!now) dl = dl - sm;
    }
    cout << now;
}
