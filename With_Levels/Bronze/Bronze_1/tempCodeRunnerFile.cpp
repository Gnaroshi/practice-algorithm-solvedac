// problem: Historical TV Remote Control
// id: 25871
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, tg;
    cin >> n;
    bool chk[10], chk2[1000];
    fill(chk, chk + 10, 1);
    fill(chk2, chk2 + 1000, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        chk[t] = 0;
    }
    cin >> tg;
    for (int i = 0; i < 10; i++)
    {
        if (!chk[i])
            continue;
        for (int j = 0; j < 10; j++)
        {
            if (!chk[j])
                continue;
            for (int k = 0; k < 10; k++)
            {
                if (!chk[k])
                    continue;
                chk2[i * 100 + j * 10 + k] = 1;
            }
        }
    }
    int ans = 0x3f3f3f3f;

    for (int i = tg; i < 1000; i++)
    {
        if (chk2[i])
        {
            ans = min(ans, i - tg);
            break;
        }
    }
    for (int i = tg; i >= 0; i--)
    {
        if (chk2[i])
        {
            ans = min(ans, tg - i);
            break;
        }
    }
    cout << ans;

    return 0;
}