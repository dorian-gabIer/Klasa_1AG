#include <iostream>
using namespace std;
bool prime(int n)
{
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}
int main()
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        int a, b, mina, mini, maxi, maxo = -1;
        for (int j = 0; j < temp; j++)
        {
            if (prime(j) && prime(temp - j))
            {
                if (maxo < abs(2 * j - temp))
                {
                    a = j;
                    b = temp - j;
                    mini = min(a, b);
                    maxi = max(a, b);
                    maxo = abs(a - b);
                }
            }
        }
        cout << mini << " " << " " << maxi << endl;
    }
    return 0;
}
