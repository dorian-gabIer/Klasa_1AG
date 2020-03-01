#include <bits/stdc++.h>
using namespace std;
struct person{
    person(int v, int i){
        value = v;
        index = i;
    }
    int value;
    int index;
    int score = 0;
};
bool people_sort_val(const person &a, const person &b){
    return a.value < b.value;
}
bool people_sort_index(const person &a, const person &b){
    return a.index < b.index;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, a, maxval = 0, previous = 1;
    cin >> n >> m;
    vector<int> stairs;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > maxval)
        {
            stairs.push_back(i);
            stairs.push_back(a);
            maxval = a;
        }
        
    }
    stairs.push_back(n);
    vector<person> people;
    for(int i = 0; i < m; i++)
    {
        int a; cin >> a;
        person x = person(a, i);
        people.push_back(x);
    }
    sort(people.begin(), people.end(), people_sort_val);
    for(int i = 0; i < m; i++)
    {
        if(people[i].value > maxval) people[i].score = n;
        else
        {
            for(int j = previous; j < stairs.size()-1; j += 2)
            {
                if(people[i].value <= stairs[j])
                {
                    people[i].score = stairs[j-1];
                    previous = j;
                    break;
                }
            }
        }        
    }
    sort(people.begin(), people.end(), people_sort_index);
    for(person a: people) printf("%i ", a.score);
    return 0;
}
