#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> sides;
    for(int i = 0; i < 3; i++)
    {
        double a; cin >> a;
        sides.push_back(a);
    }
    sort(sides.begin(), sides.end());
    if ((sides[0] + sides[1]) <= sides[2]) cout << -1 << endl;
    else
    {
        double a = sides[0], b = sides[1], c = sides[2];
        double p = (double)(a + b + c) / 2;
        cout << (int)(sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    return 0;
}
