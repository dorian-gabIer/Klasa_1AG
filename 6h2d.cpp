#include <bits/stdc++.h>
using namespace std;
int hex2dec(string n)
{
    int sum = 0;
    reverse(n.begin(), n.end());
    for(int i = 0; i < n.size(); i++)
    {
        switch(n[i])
        {
            case '1':
            sum += (pow(16, i) * 1);
            break;
            
            case '2':
            sum += (pow(16, i) * 2);
            break;
            
            case '3':
            sum += (pow(16, i) * 3);
            break;
            
            case '4':
            sum += (pow(16, i) * 4);
            break;
            
            case '5':
            sum += (pow(16, i) * 5);
            break;
            
            case '6':
            sum += (pow(16, i) * 6);
            break;
            
            case '7':
            sum += (pow(16, i) * 7);
            break;
            
            case '8':
            sum += (pow(16, i) * 8);
            break;
            
            case '9':
            sum += (pow(16, i) * 9);
            break;
            
            case 'A':
            sum += (pow(16, i) * 10);
            break;
            
            case 'B':
            sum += (pow(16, i) * 11);
            break;
            
            case 'C':
            sum += (pow(16, i) * 12);
            break;
            
            case 'D':
            sum += (pow(16, i) * 13);
            break;
            
            case 'E':
            sum += (pow(16, i) * 14);
            break;
            
            case 'F':
            sum += (pow(16, i) * 15);
            break;
        }
    }
    return sum;
}
int main()
{
    string n;
    cin >> n;
    cout << hex2dec(n);
    return 0;
}
