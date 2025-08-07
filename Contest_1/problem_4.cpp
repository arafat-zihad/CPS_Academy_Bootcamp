// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long st; cin >> st;
//     long long p; cin >> p;

//     int count = 0;
//     for(int i = 1; i >= 0; i++){

//         long long a = p * i;
//         if(a > st){
//             break;
//         }
//         count++;
//     }
//     cout << count+1;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long st; cin >> st;
    long long p; cin >> p;

    cout << (st+p-1)/p << endl;
    
    return 0;
}