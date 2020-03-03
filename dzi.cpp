#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int p = 2;
	int n = 0, k = 0; 
	int g = 0; 
	int  minb, aob; 
	int j;
	vector<int>gp;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		if (p == 0)
		{
			g++;
			gp.push_back(i);
		}
	}
	if (g < k)
	{ 
		cout << "NIE" << endl;
		return 0;
	}

	if (g == 1)
	{ 
		cout << "0" << endl;
		return 0;
	}
	minb = n - g; 
	aob = 0;
	j = 0;
	for (int j = 0; j < g - (k - 1); j++)
	{
		aob = gp[j + k - 1] - gp[j] - (k - 1);
		if (aob < minb)
		{
			minb = aob;
		}
		aob = 0;
	}
	cout << minb << endl;
	return 0;
}
