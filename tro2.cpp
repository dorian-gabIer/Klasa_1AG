#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(6) << sqrt((((a + b + c)/2)*(((a + b + c)/2)-a)*(((a + b + c)/2)-b)*(((a + b + c)/2)-c)));
    return 0;
}
