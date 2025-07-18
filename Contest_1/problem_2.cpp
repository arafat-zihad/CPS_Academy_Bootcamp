#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    // double f;
    cin >> a >> b;
    int d = a / b;
    int r = a % b;
    double f = a / b;
    cout << d << " " << r << " " << f << endl;
    return 0;
}