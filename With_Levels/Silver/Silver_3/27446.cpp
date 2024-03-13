// problem: 랩실에서 잘 자요
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, bef = 0, ans = 0;
    cin >> n >> m;
    bool *chk = new bool[n + 1];
    fill(chk, chk + n + 1, 1);
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        chk[t] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (chk[i])
        {
            if (bef)
                ans += min((i - bef) * 2, 7);
            else
                ans += 7;
            bef = i;
        }
    }
    cout << ans;

    return 0;
}