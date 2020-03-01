#include <bits/stdc++.h>
using namespace std;
struct kabel{
    kabel(int w, int n){
        wyt = w;
        nap = n;
        ratio = wyt-nap;
    }
    int wyt;
    int nap;
    int ratio = 0;
};
bool my_sort(const kabel &a, const kabel &b){
    return a.ratio > b.ratio;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    int ik = 0;
    long long suma = 0;
    vector<kabel> kable;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;

        if(a >= b){ 
            suma += (a-b);
            ik++;
        }
        else
            kable.push_back(kabel(a, b));
    }
    sort(kable.begin(), kable.end(), my_sort);
    for(kabel k: kable){
        if(suma + k.ratio >= 0){
            suma += k.ratio;
            ik++;
        }
        else break;
    }
    printf("%i", ik);
    return 0;
}
