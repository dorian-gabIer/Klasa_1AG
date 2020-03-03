#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, c = 0;
    string temp1, temp2;
    size_t found;
    cin >> n;
    vector<string>results;
    for(i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        found = temp1.find(temp2);
        if(strstr(temp1.c_str(), temp2.c_str()))
        {
            results.push_back(temp1);
            c++;
        }
    }
    if(c != 0)
    {
        for(i = 0; i < c; i++)
        {
            cout << results[i] << endl;
        }
    }
    cout << "0";
}
