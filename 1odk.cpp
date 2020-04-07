#include <iostream>
using namespace std;
int main()
{
    int i, tab[10];
    for(i = 0; i < 10; i++) cin >> tab[i];
    i = 10;
    while(i--) cout << tab[i] << endl;
    return 0;
}
