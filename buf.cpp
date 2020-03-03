#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, b, c = 0;
    string temp;
    cin >> n >> b;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp.length() > b) c++;
    }
    cout << c;
}
