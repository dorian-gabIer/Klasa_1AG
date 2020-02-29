#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, g = 0, b = 0;
    cin >> n >> k;
    int minboys = n;
    int a[n];
    for (auto &val : a)
    {
        cin >> val;
        if (val == 0)
        {
            g++;
        }
    }
    if (g < k)
    {
        cout << "NIE";
    }
    else if (g == k)
    {
        cout << n - k;
    }
    else
    {
        for (int i = 0; i < n - k; i++)
        {
            if (a[i] == 1)
            {
                continue;
            }
            g = 0;
            for (int c = 0; c < n - i; c++)
            { //for every position after that
                if (a[i + c] == 0)
                {
                    g++;
                    if (g == k)
                    {
                        minboys = min(minboys, b);
                        b = 0;
                        break;
                    }
                }
                else
                {
                    b++;
                }
            }
        }
    }
    cout << minboys;
    return 0;
}
