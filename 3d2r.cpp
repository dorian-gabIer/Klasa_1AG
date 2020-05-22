#include <bits/stdc++.h>
using namespace std;
string dec2rom(int n)
{
    string res;
    while(n != 0)
    {
        if (n >= 1000) {
           res += "M";
           n -= 1000;
        }
        else if (n >= 900) {
           res += "CM";
           n -= 900;
        }        
        else if (n >= 500) {           
           res += "D";
           n -= 500;
        }
        else if (n >= 400) {
           res += "CD";
           n -= 400;
        }
        else if (n >= 100) {
           res += "C";
           n -= 100;                       
        }
        else if (n >= 90) {
           res += "XC";
           n -= 90;                                              
        }
        else if (n >= 50) {
           res += "L";
           n -= 50;                                                                     
        }
        else if (n >= 40) {
           res += "XL";          
           n -= 40;
        }
 
        else if (n >= 10) {
           res += "X";
           n -= 10;           
        }
 
        else if (n >= 9) {
           res += "IX";
           n -= 9;                         
        }
        else if (n >= 5) {
           res += "V";
           n -= 5;                                     
        }
        else if (n >= 4) {
           res += "IV";
           n -= 4;                                                            
        }
        else if (n >= 1) {
           res += "I";
           n -= 1;                                                                                   
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << dec2rom(n);
    return 0;
}
