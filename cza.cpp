#include <iostream>
using namespace std;
int main()
{
    int alls, s, h, m;
    cin >> alls;
    m = alls / 60;
    s = alls % 60;
    h = m / 60;
    m = m % 60;
    cout << h << "g" << m << "m" << s << "s";
}
