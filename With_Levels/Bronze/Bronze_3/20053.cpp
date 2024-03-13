// problem: 최소, 최대 2
// id: 20053
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, t, mx = -1000001, mn = 1000001;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mx = max(mx, t);
            mn = min(mn, t);
        }
        cout << mn << ' ' << mx << '\n';
    }
    return 0;
}