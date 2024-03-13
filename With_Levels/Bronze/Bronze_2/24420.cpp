// problem: ピアノコンクール (Piano Competition)
// id: 24420
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mn = 101, mx = -1, s = 0, n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mn = min(mn, t);
        mx = max(mx, t);
        s += t;
    }
    cout << s - mn - mx;

    return 0;
}