// // problem: F번 - 벼락치기
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> v;
// int n, t, d, m, ps, pdc, mx = 0;

// bool chk[1001];
// void fn(int lt, int cnt, int pos)
// {
//     if (pos == n)
//     {
//         mx = max(mx, cnt);
//         return;
//     }
//     if (lt - v[pos].first >= 0)
//     {
//         fn(lt - v[pos].first, cnt + v[pos].second, pos + 1);
//     }
//     fn(lt, cnt, pos + 1);
//     return;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> t;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> d >> m;
//         v.push_back({d, m});
//         ps += m;
//         pdc += d;
//     }
//     if (pdc == t)
//     {
//         cout << 0;
//         return 0;
//     }
//     sort(v.begin(), v.end(), greater<>());
//     fn(t, 0, 0);
//     cout << ps - mx;

//     return 0;
// } tle

// problem: F번 - 벼락치기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, s = 0;
    cin >> n >> t;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int d, m;
        cin >> d >> m;
        v.push_back({d, m});
        s += m;
    }
    int **dp = (int **)malloc(sizeof(int *) * n + 1);
    for (int i = 0; i < n + 1; i++)
        dp[i] = (int *)malloc(sizeof(int) * t + 1);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (v[i - 1].first <= j)
                dp[i][j] = max(v[i - 1].second + dp[i - 1][j - v[i - 1].first], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << s - dp[n][t];

    return 0;
}