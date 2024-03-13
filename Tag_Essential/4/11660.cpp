#include <bits/stdc++.h>
using namespace std;

#define MX 1030

int n, m;
int board[MX][MX];
int board_sum[MX][MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> board[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int ii = 1; ii <= i; ii++)
                board_sum[i][j] += board[ii][j];
            for (int jj = 1; jj < j; jj++)
                board_sum[i][j] += board[i][jj];
            board_sum[i][j] += board_sum[i - 1][j - 1];
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << board_sum[i][j] << ' ';
    //     cout << '\n';
    // }

    while (m--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x2 - x1 == 0 && y2 - y1 == 0)
            cout << board[x2][y2] << '\n';
        else
            cout << board_sum[x2][y2] - board_sum[x1 - 1][y2] - board_sum[x2][y1 - 1] + board_sum[x1 - 1][y1 - 1] << '\n';
    }

    return 0;
}