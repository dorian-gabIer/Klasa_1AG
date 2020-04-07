#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}
int main()
{
    int n, i;
    cin >> n;
    int newn = n;
    for(i = 2; i * i < n; i++)
    {
        if(prime(newn))
        {
            cout << newn;
            break;
        }
        if(prime(i) && newn % i == 0)
        {
            while(newn%i == 0)
            {
                cout << i << endl;
                newn /= i;
            }
        }
    }
    return 0;
}
