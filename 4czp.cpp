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
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(prime(temp)) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
    return 0;
}
