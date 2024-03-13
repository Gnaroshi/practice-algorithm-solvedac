// problem: 창용이의 시계
// id: 12840
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int OD = 86400;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, s, q;
    cin >> h >> m >> s >> q;
    ll tot = 0;
    tot += h * 60 * 60 + m * 60 + s;
    while (q--)
    {
        int t, c;
        cin >> t;
        if (t == 1)
        {
            cin >> c;
            tot += c;
        }
        else if (t == 2)
        {
            cin >> c;
            tot -= c;
        }
        else
        {
            if (tot < 0)
            {
                while (tot < 0)
                    tot += OD;
            }
            else if (tot > OD)
            {
                while (tot > OD)
                    tot -= OD;
            }
            int r;
            s = tot % 60;
            r = (tot - s) / 60;
            m = r % 60;
            h = (r - m) / 60;
            cout << h << ' ' << m << ' ' << s << '\n';
        }
    }

    return 0;
}