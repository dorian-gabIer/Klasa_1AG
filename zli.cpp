#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i, n;
    cin >> n;
    string temp;
    vector<char>small;
    vector<char>big;
    vector<char>smallorg;
    vector<char>bigorg;
    n++;
    while(n--)
    {
        getline(cin, temp);
        for(auto x : temp)
        {
            if(x != ' ' && x >= 'a' && x <= 'z')
            {
                small.push_back(x);
                smallorg.push_back(x);
            }
            if(x != ' ' && x >= 'A' && x <= 'Z')
            {
                big.push_back(x);
                bigorg.push_back(x);
            }
        }
    }
    sort(small.begin(), small.end());
    sort(big.begin(), big.end());
    small.erase(unique(small.begin(), small.end()), small.end());
    big.erase(unique(big.begin(), big.end()), big.end());
    for(i = 0; i < small.size(); i++)
    {
        cout << small[i];
        cout << " ";
        cout << count(smallorg.begin(), smallorg.end(), small[i]);
        cout << endl; 
    }
    for(i = 0; i < big.size(); i++)
    {
        cout << big[i];
        cout << " ";
        cout << count(bigorg.begin(), bigorg.end(), big[i]);
        cout << endl;
    }
}
