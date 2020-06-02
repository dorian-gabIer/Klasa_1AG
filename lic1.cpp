#include <iostream>
#include <string>
using namespace std;
int main()
{
    int licznik = 0;
    string temp;
    while(cin >> temp) if(temp[0] == temp.back()) licznik++;
    cout << licznik;
    return 0;
}
