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

    int n, o, tg, ans = 1000;
    cin >> n;
    bool chk[10];
    fill(chk, chk + 10, 1);
    for (int i = 0; i < n; i++)
    {
        cin >> o;
        chk[o] = 0;
    }
    cin >> tg;

    for (int i = 0; i < 1000; i++)
    {
        string t = to_string(i);
        bool isA = true;
        for (auto j : t)
        {
            if (!chk[j - '0'])
            {
                isA = false;
                break;
            }
        }
        if (isA)
            ans = min(ans, abs(i - tg));
    }
    cout << ans;

    return 0;
}