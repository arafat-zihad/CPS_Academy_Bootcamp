// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int s1, s2, s3; cin >> s1 >> s2 >> s3;
//     int count = 0;
//     if(s1 == 1){
//         count++;
//     }
//     if(s2 == 1){
//         count++;
//     }
//     if(s3 == 1){
//         count++;
//     }
//     cout << count <<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    if (n / 100 == 1)
    {
        count++;
    }
    if ((n / 10) % 10 == 1)
    {
        count++;
    }
    if (n % 10 == 1)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}