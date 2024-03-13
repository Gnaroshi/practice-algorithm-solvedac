// problem: 쉬운 계단수
// id: 10844
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9;

ll ans;
ll cnt[101][11];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    fill(cnt[1] + 1, cnt[1] + 10, 1);
    for (int i = 2; i <= n; i++)
    {
        cnt[i][0] = (cnt[i - 1][1]) % MOD;
        for (int j = 1; j < 9; j++)
            cnt[i][j] = (cnt[i - 1][j - 1] + cnt[i - 1][j + 1]) % MOD;
        cnt[i][9] = (cnt[i - 1][8]) % MOD;
    }
    for (int i = 0; i <= 9; i++)
    {
        ans += cnt[n][i];
        ans %= MOD;
    }
    cout << ans;

    return 0;
}