#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool strLengthCompare(string s1, string s2) {
    return (s1.length() == s2.length()) ?
        (s1 < s2) :
            (s1.length() < s2.length());
}
int main(){
    int useless;
    cin >> useless;
    string temp, last;
    vector<string>v;
    while(1)
    {
        cin >> temp;
        if(temp == last) break;
        last = temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), strLengthCompare);
    for(string item : v) {
        cout << item << endl;
    }
}
