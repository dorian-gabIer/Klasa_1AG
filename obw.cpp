#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, tmpw, tmpb, sum = 0, c = 0;
    vector<int>cable;
    cin >> n;
    for(i = 0; i <= n-1; i++)
    {
        cin >> tmpw;
        cin >> tmpb;
		    cable.push_back(tmpw-tmpb);
    }
	  sort(cable.begin(),cable.end());
    for(i = n-1; i >= 0; i--)
    {
 		    sum = sum +  cable[i];
 		    if (sum < 0)
        {
 			    break;
        }
 		    c++;
    }    
    cout << c;
    return 0;
}
