#include <bits/stdc++.h>
using namespace std;
int main(){
    double A, B; cin >> A>> B;
    A -= (pow(B, 2) + pow(A, 2)) / (A*2);
    printf("%.2f", A);
    return 0;
}
