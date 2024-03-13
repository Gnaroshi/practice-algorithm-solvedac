// problem: 양념 반 후라이드 반
// id: 16917
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, x, y, it, mn, ts, t;
    cin >> a >> b >> c >> x >> y;
    it = max(x, y);
    ts = a * x + b * y;
    mn = ts;
    for (int i = 1; i <= it; i++)
    {
        t = ts - min(i, x) * a - min(i, y) * b + 2 * i * c;
        if (t < mn)
        {
            mn = t;
        }
    }
    cout << mn;

    return 0;
}
