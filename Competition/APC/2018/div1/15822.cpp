#include <bits/stdc++.h>
using namespace std;

int n;
int x[2005];
int y[2005];
int dp[2005][2005];
int mx = 0x7f7f7f7f;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++)
        cin >> y[i];

    for (int i = 0; i <= n; i++)
        fill(dp[i], dp[i] + n + 1, mx);
    dp[0][0] = 0;
    // dp[0][1] = abs(y[1]);
    // dp[1][0] = abs(x[1]);

    // for (int i = 1; i <= n; i++)
    // {
    //     dp[1][i] = abs(x[1] - y[i]) + dp[1][i - 1];
    //     dp[i][1] = abs(x[i] - y[1]) + dp[i - 1][1];
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = abs(x[i] - y[j]) * abs(x[i] - y[j]) + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
        }
    }
    int ans = 0;
    int cx = n, cy = n;
    while (true)
    {
        if (cx == 0 || cy == 0)
            break;
        int dis = x[cx] - y[cy];
        ans += dis * dis;
        int d1 = mx, d2 = mx, d3 = mx;
        if (cx - 1 != 0)
            d1 = dp[cx - 1][cy];
        if (cy - 1 != 0)
            d2 = dp[cx][cy - 1];
        if (cy - 1 != 0 && cx - 1 != 0)
            d3 = dp[cx - 1][cy - 1];
        int min_dp = min(min(d1, d2), d3);
        if (min_dp == d3)
        {
            cx -= 1;
            cy -= 1;
        }
        else if (min_dp == d2)
            cy -= 1;
        else
            cx -= 1;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //         cout << dp[i][j] << ' ';
    //     cout << '\n';
    // }
    // cout << "\n-----------\n";
    cout << ans << '\n';

    return 0;
}