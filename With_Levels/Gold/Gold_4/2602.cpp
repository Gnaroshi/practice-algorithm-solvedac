// problem: 돌다리 건너기
// id: 2602
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string scroll, a, b;
    cin >> scroll >> a >> b;
    int sl = scroll.length() + 1, l = a.length() + 1, t = 0, ans = 0;
    vector<vector<int>> va(l), vb(l);
    for (int i = 0; i < l; i++)
    {
        va[i].resize(sl);
        vb[i].resize(sl);
        if (scroll[0] == a[i])
            va[i][0] = 1;
        if (scroll[0] == b[i])
            vb[i][0] = 1;
    }

    sl--, l--;
    for (int i = 0; i < l; i++)
    {
        for (int j = 1; j < sl; j++)
        {
            if (scroll[j] == a[i])
            {
                t = 0;
                for (int k = 0; k < i; k++)
                {
                    if (vb[k][j - 1] != 0)
                        t += vb[k][j - 1];
                }
                va[i][j] = t;
            }
            if (scroll[j] == b[i])
            {
                t = 0;
                for (int k = 0; k < i; k++)
                {
                    if (va[k][j - 1] != 0)
                        t += va[k][j - 1];
                }
                vb[i][j] = t;
            }
        }
    }

    // for (auto i : va)
    // {
    //     for (auto j : i)
    //         cout << j << ' ';
    //     cout << '\n';
    // }

    for (int i = 0; i < l; i++)
    {
        ans += va[i][sl - 1];
        ans += vb[i][sl - 1];
    }

    cout << ans;
    return 0;
}