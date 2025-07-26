#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        int count = 1;
        for (int i = 1;; i++)
        {
            if (i % 3 == 0)
            {
                continue;
            }
            if (i % 10 == 3)
            {
                continue;
            }
            if (count == k)
            {
                cout << i << endl; 
                break;
            }
            count++;
        }
    }
    return 0;
}