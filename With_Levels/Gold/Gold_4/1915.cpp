// // problem: 가장 큰 정사각형
// // id: 1915
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// const int MX = 1001;
// int n, m, ans = 0;
// int brd[MX][MX];
// int dp[MX][MX];
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         for (int j = 0; j < m; j++)
//         {
//             brd[i][j] = s[j] - '0';
//             if (brd[i][j] == 1)
//                 dp[i][j] = 1;
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (brd[i][j] == 0)
//                 continue;
//             int u = 0, l = 0;
//             for (int a = i; a >= 0; a--)
//             {
//                 if (brd[a][j] == 1)
//                     u++;
//                 else
//                     break;
//             }
//             for (int a = j; a >= 0; a--)
//             {
//                 if (brd[i][a] == 1)
//                     l++;
//                 else
//                     break;
//             }
//             dp[i][j] = min(dp[i - 1][j - 1] + 1, min(u, l));
//         }
//     }
//     int mx = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= m; j++)
//             mx = max(mx, dp[i][j]);
//     }
//     cout << mx * mx;

//     return 0;
// }

// problem: 가장 큰 정사각형
// id: 1915
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 1001;
int n, m, mx = 0;
int dp[MX][MX];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = s[j] - '0';
            mx = max(dp[i][j], mx);
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (dp[i][j] == 1)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
                dp[i][j] = min(dp[i - 1][j - 1], dp[i][j]) + 1;
                mx = max(mx, dp[i][j]);
            }
        }
    }
    cout << mx * mx;

    return 0;
}