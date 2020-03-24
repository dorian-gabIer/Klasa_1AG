#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(a <= 0 or b <= 0 or c <= 0)
    {
        cout << "BLEDNE DANE";
        return 0;
    }
    if((a+b) > c && (a+c) > b && (b+c) > a) cout << fixed << setprecision(2) << sqrt((((a + b + c)/2)*(((a + b + c)/2)-a)*(((a + b + c)/2)-b)*(((a + b + c)/2)-c)));
    else cout << "TROJKAT NIE ISTNIEJE";
    return 0;
}
