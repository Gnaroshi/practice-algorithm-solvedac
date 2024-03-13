// problem: License to Launch
// id: 17912
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mnl, mn = 0x3f3f3f3f;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (mn > t)
        {
            mn = t;
            mnl = i;
        }
    }
    cout << mnl;

    return 0;
}