#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    bool is;
    int a[n];
    for(auto& v : a)
    {
        cin >> v;
    }
    cin >> m;
    int b[m];
    for(auto& v : b)
    {
        cin >> v;
    }
    for(int i = 0; i < m; i++)
    {
        is = false;
        for(int g = 0; g < n; g++)
        {
            if(b[i] == a[g])
            {
                cout << g << endl;
                is = true;
            }
        }
        if(is == false)
        {
            cout << 'X' << endl;
        }
    }
    return 0;
}
