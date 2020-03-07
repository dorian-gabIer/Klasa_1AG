#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
	int n, t, a, b;
	string str1, str2;
	char temp;
	cin >> n;
	cin >> str1;
	cin >> str2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		temp = str2[b];
		str2[b] = str1[a];
		str1[a] = temp;
		if (str1 == str2) {
			cout << "0" << "\n";
             continue;
		}
        if (str1 > str2)
		{
			cout << "1" << "\n";
             continue;
		}
        if (str1 < str2)
		{
			cout << "2" << "\n";
             continue;
		}
        continue;
	}
	return 0;
}
