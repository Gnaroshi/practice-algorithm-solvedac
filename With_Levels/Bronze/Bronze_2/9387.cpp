// problem: Gholam’s Simple Game
// id: 9387
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
        int m, n, st = 0, cnt = 0, y = 0;
        cin >> m >> n;
        vector<int> v(m);
        bool d = true;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            if (v[i] == 2)
                st = i;
            else if (v[i] == 3)
            {
                st = i;
                d = !d;
            }
            else if (v[i] == 0)
                y++;
        }
        for (int i = 0; i < n; i++)
        {
            // cout << st << ' ' << d << ' ' << v[st] << '\n';
            (d ? st++ : st--);
            if (st == m || st == -1)
            {
                if (st == m)
                    st--;
                else
                    st++;
                d = !d;
                i--;
                continue;
            }
            if (v[st] == 0)
                cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}

// 5 12
// 1 1 2 1 1
// 1 1 1 2 1 1 1 2 1 1 1 2 1
