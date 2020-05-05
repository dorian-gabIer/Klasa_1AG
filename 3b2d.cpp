#include <bits/stdc++.h>
using namespace std;
int bin2dec(string n)
{
    int sum = 0;
    string temp;
    reverse(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++)
    {
        temp = n[i];
        sum += (stoi(temp) * pow(2, i));
        temp = "";
    }
    return sum;
}
int main()
{
    string n;
    cin >> n;
    cout << bin2dec(n);
    return 0;
}
