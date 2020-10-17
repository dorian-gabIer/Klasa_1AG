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
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) if(prime(i)) cout << i << " ";
    return 0;
}
