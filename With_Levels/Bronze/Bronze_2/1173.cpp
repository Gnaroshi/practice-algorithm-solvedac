#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m1, m2, t, r;
    int ans = 0;
    int work = 0;
    int base_m;
    cin >> n >> m1 >> m2 >> t >> r;
    base_m = m1;

    if (m2 - m1 < t)
    {
        cout << -1 << '\n';
        return 0;
    }
    while (true)
    {
        if (work == n)
        {
            break;
        }
        if (m1 + t <= m2)
        {
            work++;
            ans++;
            m1 += t;
        }
        else
        {
            if (m1 - r < base_m)
            {
                m1 = base_m;
            }
            else
            {
                m1 -= r;
            }
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}