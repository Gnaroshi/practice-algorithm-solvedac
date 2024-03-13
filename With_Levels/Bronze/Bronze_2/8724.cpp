// problem: Pinezki
// id: 8724
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mx = -1, cnt = 0;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t)
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    cout << mx;

    return 0;
}