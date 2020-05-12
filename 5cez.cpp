#include <bits/stdc++.h>
using namespace std;
string szyfruj(string tekst)
{
	int i = 0;
	int klucz = 3;
	while (tekst[i] != '\0')
	{
		tekst[i] += klucz;
		i++;
	}
	return tekst;
}
int main()
{
	string in;
	int temp, a;
	char temp2;
	getline(cin, in);
	cout << szyfruj(in);
	return 0;
}
