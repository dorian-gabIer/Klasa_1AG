#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> sticks;
    for(int i = 0; i < 3; i++)
    {
        int a; cin >> a;
        sticks.push_back(a);
    }
    sort(sticks.begin(), sticks.end());
    if (sticks[0] == sticks[1] && sticks[1] == sticks[2]) cout << 2 << endl;
    else if ((pow(sticks[0], 2) + pow(sticks[1], 2)) == pow(sticks[2], 2)) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
