#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; cin >> a;
    int ldigit1 = a % 10;
    int ldigit2 = (a/10) % 10;
    int ldigit3 = (a/100) % 10;

    int r = (
        ((ldigit3*100)+(ldigit2*10)+(ldigit1*1))+
        ((ldigit2*100)+(ldigit1*10)+(ldigit3*1))+
        ((ldigit1*100)+(ldigit3*10)+(ldigit2*1))
    );
    cout << r << endl;
    return 0;
}