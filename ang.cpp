#include <bits/stdc++.h>
using namespace std;
bool anagramy(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
int main()
{
    int n, sum = 0;
    string a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(anagramy(a, b)) sum++;
    }
    cout << sum;
}
