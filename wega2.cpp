#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string temp;
    int mx = 0, ite = 0;
    set<char>chrs;
    vector<string>words;
    cin >> temp;
    words.push_back(temp);
        for(auto x : temp)
        {
            chrs.insert(x);
        }
        if(mx < chrs.size())
        {
            mx = chrs.size();
        }
        chrs.clear();
    while(cin >> temp)
    {
        words.push_back(temp);
        for(auto x : temp)
        {
            chrs.insert(x);
        }
        if(mx < chrs.size())
        {
            mx = chrs.size();
        }
        chrs.clear();
    }
    while(ite < words.size())
    {
        for(auto x : words[ite])
        {
            chrs.insert(x);
        }
        if(mx == chrs.size())
        {
        cout << words[ite] << " " << mx;
        return 0;
        }
        chrs.clear();
        ite++;
    }
}
