#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y; cin >> x >> y;
    int a = x - y;
    int b = y - x;
    // abs(a);
    if(x < y && abs(a) <= 2) cout << "Yes" << endl;

    else if(x > y && abs(b) <= 3) cout << "Yes" << endl;
    else cout <<"No" << endl;
    return 0;
}