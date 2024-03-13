// problem: Escape Route
// id: 5364
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    double cx, cy, mx, my, m = INT32_MAX;
    cin >> cx >> cy;
    for (int i = 1; i < n; i++)
    {
        double x, y, t;
        cin >> x >> y;
        t = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));
        if (m > t)
        {
            m = t;
            mx = x, my = y;
        }
    }
    cout << cx << ' ' << cy << '\n';
    cout << mx << ' ' << my << '\n';
    cout << fixed;
    cout.precision(2);
    cout << m;

    return 0;
}