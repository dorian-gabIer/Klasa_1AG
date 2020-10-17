#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    set <char> literki;
    for (int i = 0; i < n.size(); i++)
    {
        if (isalpha(n[i])) literki.insert(toupper(n[i]));
    }
    for (auto ite = literki.begin(); ite != literki.end(); ite++) cout << *ite << " " << (count(n.begin(), n.end(), *ite) + count(n.begin(), n.end(), tolower(*ite))) << endl;
    return 0;
}
