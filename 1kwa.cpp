#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "POLE KWADRATU ";
    else cout << "POLE PROSTOKATA ";
    cout << a*b;
    return 0;
}
