// Bismillah

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int r;
    if(n % 3 == 0){
        r = n / 3;
    }
    if( n % 5== 0){
        r = n / 5;
    }
    if(n <= 2){
        r = 0;
    }
    cout << r;
    return 0;
}