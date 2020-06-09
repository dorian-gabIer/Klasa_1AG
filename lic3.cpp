#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string str[5000];
	int y = 0, h = 0, z = 0, g = 100000, i, x;
	for(i = 0; i < 5000; i++)
	{
		cin >> str[i];
		for(int x = 0; x < str[i].size()-1; x++) if(str[i][x] <= str[i][x+1]) y++;
		if(y == str[i].size()-1)
		{
			h++;
			if(z < stoi(str[i])) z = stoi(str[i]);
			if(g > stoi(str[i])) g = stoi(str[i]);
		}
		y = 0;
	}
	cout << h << endl << z << endl << g;
}
