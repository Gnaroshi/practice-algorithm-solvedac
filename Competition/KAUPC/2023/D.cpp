// problem: D번 - 카더가든
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, c, ans = 0x3f3f3f3f;
    cin >> n >> m >> a >> b >> c;
    int **board = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        board[i] = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t = 0;
            if (m - j >= b + c && n - i >= a)
            {
                for (int kk = i; kk < i + a; kk++)
                    for (int k = j; k < j + b + c; k++)
                        t += board[kk][k];
                ans = min(ans, t);
            }
            t = 0;
            if (m - j >= c + a && n - i >= b + a)
            {
                for (int kk = i; kk < i + a; kk++)
                    for (int k = j; k < j + c; k++)
                        t += board[kk][k];
                for (int kk = i + a; kk < i + a + b; kk++)
                    for (int k = j + c; k < j + c + a; k++)
                        t += board[kk][k];
                ans = min(ans, t);
            }
            t = 0;
            if (m - j >= b + a && n - i >= c + a)
            {
                for (int kk = i; kk < i + a; kk++)
                    for (int k = j; k < j + b; k++)
                        t += board[kk][k];
                for (int kk = i + a; kk < i + a + c; kk++)
                    for (int k = j + b; k < j + b + a; k++)
                        t += board[kk][k];
                ans = min(ans, t);
            }
        }
    }
    cout << ans;

    return 0;
}