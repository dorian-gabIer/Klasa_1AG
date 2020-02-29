#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, change = 0, maxval = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i-1] >= a[i])
        {
            change += a[i-1] - a[i];
            maxval = max(change, maxval);
        }
        else
        {
            change = 0;
        }
    }
    cout << maxval;
    return 0;
}
