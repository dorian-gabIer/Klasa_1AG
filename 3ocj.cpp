#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i*i <= n; i++) if(n % i == 0) return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    int oceny[n] = {};
    set <int> oceny2({1, 2, 3, 4, 5, 6});
    for(int i = 0; i < n; i++)
    {
        cin >> oceny[i];
    }
    for(auto it = oceny2.begin(); it != oceny2.end(); it++)
    {
        cout << *it << " " << count(oceny, oceny+n, *it) << endl;
    }
    return 0;
}
