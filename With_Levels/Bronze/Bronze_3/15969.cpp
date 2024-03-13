// problem: 행복
// id: 15969
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx = -1, mn = 1001;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mx = max(mx, t);
        mn = min(mn, t);
    }
    cout << mx - mn;

    return 0;
}