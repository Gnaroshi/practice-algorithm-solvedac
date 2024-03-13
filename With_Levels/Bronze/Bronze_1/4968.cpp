// problem: Equal Total Scores
// id: 4968
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, mn, a, b;
    while (true)
    {
        cin >> n >> m;
        if (n + m == 0)
            break;
        int ts = 0, hs = 0, d, ans;
        vector<int> ta(n), ha(m);
        for (auto &i : ta)
        {
            cin >> i;
            ts += i;
        }
        for (auto &i : ha)
        {
            cin >> i;
            hs += i;
        }
        if (abs(ts - hs) % 2)
        {
            cout << -1 << '\n';
            continue;
        }
        bool chk = false, is = false;
        if (ts > hs)
        {
            swap(ts, hs);
            swap(ta, ha);
            is = true;
        }
        d = hs - ts;
        d /= 2;
        sort(ta.begin(), ta.end());
        sort(ha.begin(), ha.end());

        for (int i = 1; i <= 100 - d; i++)
        {
            for (auto j : ta)
            {
                if (j == i)
                {
                    for (auto k : ha)
                    {
                        if (k == i + d)
                        {
                            chk = true;
                            ans = i;
                            break;
                        }
                        if (i + d < k || chk)
                            break;
                    }
                }
                if (i < j || chk)
                    break;
            }
            if (chk)
                break;
        }
        if (chk)
        {
            if (is)
                cout << ans + d << ' ' << ans << '\n';
            else
                cout << ans << ' ' << ans + d << '\n';
        }
        else
            cout << -1 << '\n';
    }

    return 0;
}