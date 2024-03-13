// problem: Advertising Revenue
// id: 14771
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int ans = 0, n, v, a, b, c;
        cin >> n >> v;
        vector<pair<int, int>> dp(n);
        for (auto &i : dp)
            cin >> i.first >> i.second;
        for (int i = 0; i < v; i++)
        {
            cin >> a >> b >> c;
            if (dp[a - 1].first == 1)
                ans += dp[a - 1].second;
            if (dp[b - 1].first == 1)
                ans += dp[b - 1].second;
            if (c == 1)
            {
                if (dp[a - 1].first == 0)
                    ans += dp[a - 1].second;
            }
            else if (c == 2)
            {
                if (dp[b - 1].first == 0)
                    ans += dp[b - 1].second;
            }
        }
        cout << ans << "\n\n";
    }

    return 0;
}