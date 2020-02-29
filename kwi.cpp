#include <iostream>
using namespace std;
int main (){
    int a, g = 0, j = 0;
    while(true)
    {
        cin >> a;
        if(a == 0) break;
        if(a%2 == 0) g++;
        else j++;
    }
    if(j==g) cout << "NIKT";
    else if(j > g) cout << "JANUSZ";
    else cout << "GRAZYNA";
    return 0;
}
