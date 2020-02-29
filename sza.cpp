#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, h;
    long long avg = 0;
    cin >> n;
    vector<int> w;
    for(i = 0; i < n; i++)
    {
        cin >> h;
        w.push_back(h);
        avg += w[i];
    }
    avg /= n;
    sort(w.begin(), w.end());
    cout << avg << endl;
    if(w[n/2] > avg)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }
    return 0;
}
