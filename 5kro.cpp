#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    getline(cin, in);
    if(in.back() == '.') cout << in;
    else cout << in << ".";
    return 0;
}
