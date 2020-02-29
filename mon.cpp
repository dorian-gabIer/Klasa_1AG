#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
	int ccoins; cin >> ccoins;
	vector<int> coins;
	for(int i= 0; i < ccoins; i++)
  {
		int a; cin >> a;
		coins.push_back(a);
	}
	int sum = 0;
	for(auto n: coins)
  {
    sum += n;
	}
  int rewers = ccoins- sum;
	int awers = sum;
	if(rewers > awers)
  {
    cout << awers;
	}
  else
  {
    cout << rewers;
	}
  return 0;
}
