#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int c2 = abs(a - c) * abs(b - d);
    cout << c2 << endl;
    return 0;
}
