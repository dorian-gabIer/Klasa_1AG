#include <bits/stdc++.h>
using namespace std;
int main()
{
    int in, fp = 0, mp = 0;
    bool who = true;
    short test;
    double lastarea, area, p, a, b, c;
    area = 0;
    vector<int> sides;
    while (1)
    {
        lastarea = area;
        test = 0;
        sides.clear();
        who = !who;
        for (int i = 0; i < 3; i++)
        {
            cin >> in;
            if (in == 0)
            {
                test++;
            }
            sides.push_back(in);
        }
        if (test == 3)
        {
            break;
        }                               
        sort(sides.begin(), sides.end());
        if ((sides[0] + sides[1]) <= sides[2])
        {
            continue;
        } 
        
        if (who == false)
        {
            fp++;
        }
        else
        {
            mp++;
        } 
        a = sides[0];
        b = sides[1];
        c = sides[2];
        p = (a + b + c) * 0.5;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        if ((area >= lastarea * 0.8) && (area <= lastarea * 1.2))
        {
            if (who == false)
            {
                fp++;
            }
            else
            {
                mp++;
            }
            if (a * a + b * b == c * c)
            {
                if (who == false)
                {
                    fp++;
                }
                else
                {
                    mp++;
                }
            }
        }
    }
    cout << fp << ' ' << mp;
    return 0;
}
