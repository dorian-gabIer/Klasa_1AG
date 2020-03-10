#include <string>
#include <iostream>
using namespace std;
int main() {
    int n, i, max = 0;
    string temp;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> temp;
        if(max < temp.length()) max = temp.length();
    }
    cout << max;
}
