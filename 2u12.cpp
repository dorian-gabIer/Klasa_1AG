#include <bits/stdc++.h>
using namespace std;
string u12dec(string n)
{
    int s = n.size();
    string temp;
    int res = 0;
    reverse(n.begin(), n.end());
    for(int i = 0; i < s; i++)
    {
        if(i == s-1)
        {
            temp = n[i];
            res += (pow(2, i)*stoi(temp)*(-1));
        }
        else
        {
            temp = n[i];
            res += (pow(2, i)*stoi(temp));
        }
    }
    return to_string(res);
}
int main()
{
    string n;
    cin >> n;
    cout << u12dec(n);
    return 0;
}
