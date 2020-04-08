#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    vector<int>numbs;
    while(n--)
    {
        cin >> temp;
        numbs.push_back(temp);
    }
    cout << *max_element(numbs.begin(), numbs.end())-*min_element(numbs.begin(), numbs.end());
    return 0;
}
