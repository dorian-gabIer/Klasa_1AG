#include <iostream>
using namespace std;
void siout(char a, int b)
{
    for(int x = 1; x <= b; x++)
    {
        for(int y = 1; y <= x; y++) cout << a;
        if(x != b) cout << endl;
    }
}
int main()
{
    char a;
    int b;
    cin >> a >> b;
    siout(a, b);
    return 0;
}
