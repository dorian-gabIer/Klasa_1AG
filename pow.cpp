#include <bits/stdc++.h>
using namespace std;
char *removeDuplicate(char str[], int n) 
{ 
   int index = 0;    
   for (int i=0; i<n; i++) { 
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
}
int main() 
{
    string inp;
    cin >> inp;
    for(int i = 0; i < inp.length(); i++)
    {
        if(inp[i] == inp[i + 1])
        {
            inp.erase(inp.begin()+i+1);
            i--;
        }
    } 
    cout << inp;
    return 0;
}
