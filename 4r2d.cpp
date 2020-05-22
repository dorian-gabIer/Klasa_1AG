// Example program
#include <bits/stdc++.h>
using namespace std;
int w(char r) 
{
    if (r == 'I') return 1; 
    else if (r == 'V') return 5; 
    else if (r == 'X') return 10; 
    else if (r == 'L') return 50; 
    else if (r == 'C') return 100; 
    else if (r == 'D') return 500; 
    else if (r == 'M') return 1000; 
    else return -1;
}
int rom2dec(string n)
{
    int i = 0, sum = 0;
    char temp = 'a';
    while(temp != n.back())
    {
        temp = n[i];
        if(w(n[i+1]) > w(n[i]))
        {
            sum += (w(n[i+1])-w(n[i]));
            temp = n[i+1];
            i += 2;
        }
        else
        {
            sum += w(n[i]);
            i++;
        }
    }
    return sum;
}
int main()
{
    string n;
    cin >> n;
    cout << rom2dec(n);
    return 0;
}
