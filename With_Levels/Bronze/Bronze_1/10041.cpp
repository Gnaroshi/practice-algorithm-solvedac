// problem: 관광
// id: 10041
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, n, cx, cy, dx, dy, ans = 0, m;
    cin >> w >> h >> n >> cx >> cy;
    n--;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        dx = x - cx;
        dy = y - cy;
        if (dx * dy > 0)
        {
            m = min(abs(dx), abs(dy));
            ans += m;
            ans += abs(dx) - m + abs(dy) - m;
        }
        else
            ans += abs(dx) + abs(dy);
        cx = x, cy = y;
    }
    cout << ans << '\n';

    return 0;
}