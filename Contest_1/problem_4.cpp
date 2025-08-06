#include <bits/stdc++.h>
using namespace std;
int main(){
    int st; cin >> st;
    int p; cin >> p;

    int count = 0;
    for(int i = 1; i >= 0; i++){

        int a = p * i;
        if(a > st){
            break;
        }
        count++;
    }
    cout << count+1;
    return 0;
}