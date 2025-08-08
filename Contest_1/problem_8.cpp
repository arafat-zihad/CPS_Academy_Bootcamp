//Bismillah

//Method 1
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b; cin >> a >> b;
//     int r = pow(a,b);
//     cout << r << endl;
//     return 0;
// }

//Method 2
#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b; cin >> a >> b;
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    cout << ans << endl;
    return 0;
}