#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 1, m = 1;
    int t; cin >> t;
    while(t--)
    {
        int dl, dm;
        cin >> dl>> dm;
        if(m != dm)
        {
            dl *= m;
            l *= dm;
            m *= dm;
        }
        l -= dl;
        if (l <= 0)
        {
            l = m + (l % m);
        }
        for(int i = 2; i <= m; i++)
        {
            if((l % i == 0) && (m % i == 0))
            {
                l /= i;
                m /= i;
                i = 1;
            }
        }
    }
    if(l == 0 || l == m)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << l << "/" << m << endl;
    }
}
