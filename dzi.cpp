#include <bits/stdc++.h>
using namespace std;
int main() {
	// just in case
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int* bg = NULL; // boys and girls
	int n = 0, k = 0; // n: amount of people, k: wanted girls with no boys between them
	int g = 0; //girls
	int gt, minb, aob; // gt: girls together  minb: min boys to go aob: actual amount of boys
	int jj;
	vector<int>gp; // vector with place in the row for each girl

	cin >> n >> k;
	bg = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> bg[i];
		if (bg[i] == 0)
		{
			g++;
			gp.push_back(i);
		}
	}
	if (g < k)
	{ // not enough girls 
		cout << "NIE" << endl;
		return 0;
	}

	if (g == 1)
	{ // only place for one girl is asked, no boy has to leave the line
		cout << "0" << endl;
		return 0;
	}

	minb = n - g; // worst case
	aob = 0;
	gt = 1;
	for (int j = 0; j < g; j++)
	{
		if (g - j < k)
			break;
		jj = 1;
		gt = 1;
		while (gt < k)
		{
			while (gp[j] + jj < n )
			{
				if (bg[gp[j] + jj] == 0)
				{
					gt++;
					if (gt == k)
						break;
				}
				else
				{
					aob++;
				}
				jj++;
			}
		}
		if (aob < minb)
		{
			minb = aob;
		}
		aob = 0;
	}
	cout << minb << endl;
	return 0;
}
