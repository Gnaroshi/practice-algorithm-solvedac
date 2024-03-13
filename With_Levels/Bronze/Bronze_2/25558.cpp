// problem: 내비게이션
// id: 25558
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, sx, sy, ex, ey, ans = 1, mn = LLONG_MAX, m, x, y, bx, by;
    cin >> n;
    cin >> sx >> sy >> ex >> ey;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        ll ts = 0;
        bx = sx;
        by = sy;
        for (int j = 0; j < m; j++)
        {
            cin >> x >> y;
            ts += abs(x - bx) + abs(y - by);
            bx = x;
            by = y;
        }
        ts += abs(x - ex) + abs(y - ey);
        if (ts < mn)
        {
            mn = ts;
            ans = i;
        }
    }
    cout << ans;

    return 0;
}