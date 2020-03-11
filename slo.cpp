#include <bits/stdc++.h>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string temp;
    set<string> elements;
    while(cin >> temp)
    {
        elements.insert(temp);
    }
    cout << elements.size();
}
