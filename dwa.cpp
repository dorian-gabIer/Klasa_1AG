//DwaSlowa
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, t, a, b;
	string str1, str2;
	char temp[1];

	cin >> n;
	cin >> str1;
	cin >> str2;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		temp[0] = str2[b];
		str2[b] = str1[a];
		str1[a] = temp[0];

		if (str1 == str2) {
			cout << "0" << endl;
		}
		else
		{
			if (str1 > str2)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "2" << endl;
			}
		}
	}
	return 0;
}
