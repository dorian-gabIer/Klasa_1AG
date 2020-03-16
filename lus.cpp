#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b;
    cin >> b;
    a = to_string(b);
    reverse(a.begin(), a.end());
    cout << a;
}
