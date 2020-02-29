#include <bits/stdc++.h>
using namespace std;
int main(){
    double iloscl, ball_size; cin >> iloscl>> ball_size;
    double max_num = 0;
    if (iloscl >= (ball_size + ball_size*2 + ball_size*4)){
        max_num = max(max_num, (ball_size + ball_size*2 + ball_size*4));
    }
    if (iloscl>= (ball_size/2 + ball_size + ball_size*2)){
        max_num = max(max_num, (ball_size/2 + ball_size + ball_size*2));
    }
    if (iloscl>= (ball_size/4 + ball_size/2 + ball_size)){
        max_num =  max(max_num, (ball_size/4 + ball_size/2 + ball_size));
    }
    cout << (int)(max_num * 1000) << endl;
    return 0;
}
