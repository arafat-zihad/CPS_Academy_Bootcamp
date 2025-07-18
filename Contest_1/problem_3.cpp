#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, pi; cin >> a;
    pi = 3.14159265359;
    double A = pi * ( a * a);
    double C = 2 * pi * a;
    cout << fixed << setprecision(6) << A << " " << C << endl;
    return 0;
}