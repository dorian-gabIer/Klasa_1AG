#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, treason = 0;
    cin >> n;
    int a[n], b[n/2];
    for(auto& val: a)
    {
        cin >> val;
    }
    sort(a, a+n);
    for(int i = 0; i < n/2; i++)
    {
        b[i] = a[i]+a[n-i-1];
    }
    sort(b, b+(n/2));
    for(int i = 0; i < (n/2)-1;i++)
    {
        treason += b[n/2-1] - b[i];
    }
    cout << treason;
    return 0;
}
