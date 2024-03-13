// problem: Automated Checking Machine
// id: 10395
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[5] = {0};
    int t;
    for (int i = 0; i < 5; i++)
    {
        cin >> t;
        n[i] += t;
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> t;
        n[i] += t;
    }
    for (int i = 0; i < 5; i++)
    {
        if (n[i] != 1)
        {
            cout << 'N';
            return 0;
        }
    }
    cout << 'Y';

    return 0;
}