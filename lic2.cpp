#include <bits/stdc++.h>
using namespace std;
int oct2dec(string n)
{
    int sum = 0;
    string temp;
    reverse(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++)
    {
        temp = n[i];
        sum += (stoi(temp) * pow(8, i));
        temp = "";
    }
    return sum;
}
int main()
{
    string temp;
    int licznik = 0;
    while(cin >> temp)
    {
        temp = to_string(oct2dec(temp));
        if(temp[0] == temp.back()) licznik++;
    }
    cout << licznik;
    return 0;
}
