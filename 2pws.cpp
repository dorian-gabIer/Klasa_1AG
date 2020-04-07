#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    double sum = 0;
    bool found = false;
    cin >> n;
    vector<int>numbs(n);
    for(i = 0; i < n; i++)
    {
        cin >> numbs[i];
        sum += numbs[i];
    }
    for(i = 0; i < n; i++)
    {
        if(numbs[i] > sum/n)
        {
            cout << numbs[i] << endl;
            found = true;
        }
    }
    if(!found) cout << "BRAK";
    return 0;
}
