#include <bits/stdc++.h>
using namespace std;
bool m16(int n)
{
    if(n%16 == 0) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    int a;
    vector<int>vec;
    while(1)
    {
        if(n == 0) break;
        if(m16(n)) 
        {
            n /= 16;
            a = 0;
            vec.push_back(a);
        }
        if(m16(n-1)) 
        {
            n-= 1;
            n /= 16;
            a = 1;
            vec.push_back(a);
        }
        if(m16(n-2)) 
        {
            n-= 2;
            n /= 16;
            a = 2;
            vec.push_back(a);
        }
        if(m16(n-3)) 
        {
            n-= 3;
            n /= 16;
            a = 3;
             vec.push_back(a);
        }
        if(m16(n-4)) 
        {
            n-= 4;
            n /= 16;
            a = 4;
             vec.push_back(a);
        }
        if(m16(n-5)) 
        {
            n-= 5;
            n /= 16;
            a = 5;
             vec.push_back(a);
        }
        if(m16(n-6)) 
        {
            n-= 6;
            n /= 16;
            a = 6;
             vec.push_back(a);
        }
        if(m16(n-7)) 
        {
            n-= 7;
            n /= 16;
            a = 7;
             vec.push_back(a);
        }
        if(m16(n-8)) 
        {
            n-= 8;
            n /= 16;
            a = 8;
             vec.push_back(a);
        }
        if(m16(n-9)) 
        {
            n-= 9;
            n /= 16;
            a = 9;
             vec.push_back(a);
        }
        if(m16(n-10)) 
        {
            n-= 10;
            n /= 16;
            a = 10;
             vec.push_back(a);
        }
        if(m16(n-11)) 
        {
            n-= 11;
            n /= 16;
            a = 11;
             vec.push_back(a);
        }
        if(m16(n-12)) 
        {
            n-= 12;
            n /= 16;
            a = 12;
             vec.push_back(a);
        }
        if(m16(n-13)) 
        {
            n-= 13;
            n /= 16;
            a = 13;
             vec.push_back(a);
        }
        if(m16(n-14)) 
        {
            n-= 14;
            n /= 16;
            a = 14;
             vec.push_back(a);
        }
        if(m16(n-15)) 
        {
            n-= 15;
            n /= 16;
            a = 15;
             vec.push_back(a);
        }
    }
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
    if(*i < 10) cout << *i << endl;
    else
    {
        switch(*i)
        {
            case 10:
            cout << "A" << endl;
            break;
            
            case 11:
            cout << "B" << endl;
            break;
            
            case 12:
            cout << "C" << endl;
            break;
            
            case 13:
            cout << "D" << endl;
            break;
            
            case 14:
            cout << "E" << endl;
            break;
            
            case 15:
            cout << "F" << endl;
            break;
        }
    }
    return 0;
}
