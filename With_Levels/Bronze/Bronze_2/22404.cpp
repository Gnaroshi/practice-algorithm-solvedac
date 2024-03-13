// problem: 豪邸と宅配便
// id: 22404
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m >> t;
    bool *chk = (bool *)malloc(sizeof(bool) * t + 1);
    fill(chk, chk + t + 1, true);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        for (int j = max(0, a - m); j < min(t, a + m); j++)
            chk[j] = false;
    }
    int ans = 0;
    for (int i = 0; i < t; i++)
        ans += chk[i];
    cout << ans;

    return 0;
}