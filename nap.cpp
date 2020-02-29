#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, g, i;
    vector<int> stuff;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> g;
        stuff.push_back(g);
    }
    for(i = 0; i < n; i += 2)
    {
        cout << stuff[i] << ' ';
    }
    cout << endl;
    for(i = 1; i < n; i += 2)
    {
        cout << stuff[i] << ' ';
    }
    return 0;
}
