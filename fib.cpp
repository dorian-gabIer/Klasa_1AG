#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int count(string &temp1, string &temp2) 
{ 
    int size1 = temp1.length(); 
    int size2 = temp2.length(); 
    int result = 0, a;
    for (int i = 0; i <= size2 - size1; i++) 
    {  
        for (a = 0; a < size1; a++) 
        {
            if (temp2[i+a] != temp1[a]) break; 
        }
        if (a == size1)   
        { 
           result++; 
           a = 0; 
        } 
    } 
    return result; 
}
int main()
{
    string tofind;
    int n, i;
    cin >> tofind;
    cin >> n;
    string temp1, temp2, actual;
    temp1 = "b";
    temp2 = "a";
    if(n == 1) 
    {
        cout << count(tofind, temp1);
        return 0;
    }
    if(n == 2) 
    {
        cout << count(tofind, temp2);
        return 0;
    }
    for(i = 2; i < n; i++)
    {
        actual = temp2 + temp1;
        temp1 = temp2;
        temp2 = actual;
    }
    cout << count(tofind, actual);
}
