#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector<char>result(101);
    string temp;
    int i = 0;
    cin >> temp;
    for(auto x : temp)
    {
        result.push_back(x);
    }
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    int maxo = result.size();
    string wmaxo = temp;
    result.clear();
    for(i = 1; i < 1000; i++)
    {
        cin >> temp;
        for(auto x : temp)
        {
            result.push_back(x);
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        if(maxo < result.size())
        {
            maxo = result.size();
            wmaxo = temp;
        }
        result.clear();
    }
    cout << wmaxo << " " << maxo;
}
