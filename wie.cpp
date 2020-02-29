#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, i, a, temp, cstair = 0;
    vector<int>stairs;
    bool itdid = false;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> temp;
        stairs.push_back(temp);
    }
    for(i = 0; i < m; i++)
    {
        cin >> temp;
        for(a = 0; a < n; a++)
        {
           if(!itdid)
           {
               if(stairs[a] < temp)
               {
                    cstair++;
               }
               else
               {
                    cout << cstair << " ";
                    itdid = true;
               }
           }
        }
        if(!itdid)
        {
            cout << cstair << " ";
        }
        cstair = 0;
        itdid = false;
    }
}
