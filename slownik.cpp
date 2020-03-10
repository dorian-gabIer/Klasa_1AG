#include <bits/stdc++.h>
using namespace std;
int main() {
    string temp;
    vector<string>words;
    int c = getchar();
    char a;
    while(c != EOF)
    {
        cin >> temp;
        a = static_cast<char>(c);
        temp = a + temp;
        words.push_back(temp);
        c = getchar();
    }
    sort( words.begin(), words.end() );
    words.erase( unique( words.begin(), words.end() ), words.end() );
    cout << words.size() - 1;
}
