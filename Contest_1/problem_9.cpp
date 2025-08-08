// Bismillah

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int r1 = 1, r2 = 1, r3;
    for(int i = 0; i < b; i++){
        r1 = r1 * a;
    }
    for(int i = 0; i < a; i++){
        r2 = r2 * b;
    }
    r3 = r1 + r2;
    cout << r3 << endl;
    return 0;
}