#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, c = 0, x, i;
    bool yesss[30000];
    int numbs[30000];
    set <int> setnumbs;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        setnumbs.insert(i);
        cin >> numbs[i];
        numbs[i]--;
    }
    while(!setnumbs.empty())
    {
        x = *setnumbs.begin();
        setnumbs.erase(setnumbs.begin());
        yesss[c] = true;
        while(!yesss[numbs[x]])
        {
            x = numbs[x];
            yesss[x] = true;
            setnumbs.erase(x);
        }
        c += 1;
    }
    cout << c;
    return 0;
}
