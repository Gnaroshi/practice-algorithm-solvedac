#include <bits/stdc++.h>
using namespace std;

#define MX 1005

int r, c, t;
int ap_ru, ap_rd;
int board[MX][MX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c >> t;
    queue<pair<int, int>> q1;

    bool isFirst = false;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == -1)
            {
                if (!isFirst)
                {
                    ap_ru = i;
                    isFirst = !isFirst;
                }
                else
                    ap_rd = i;
            }
        }
    }
    // cout << ap_ru << ' ' << ap_rd << '\n';

    while (t--)
    {
        int board_temp[MX][MX];
        for (int i = 0; i < MX; i++)
        {
            for (int j = 0; j < MX; j++)
            {
                board_temp[i][j] = board[i][j];
                if (board[i][j] > 0)
                    q1.push({i, j});
            }
        }
        while (!q1.empty())
        {
            auto cur = q1.front();
            q1.pop();
            int dis_v = board[cur.first][cur.second] / 5;
            int dis_d = 0;
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 1 || nx > r || ny < 1 || ny > c)
                    continue;
                if (board[nx][ny] == -1)
                    continue;
                dis_d++;
                board_temp[nx][ny] += dis_v;
            }
            board_temp[cur.first][cur.second] -= dis_v * dis_d;
        }
        for (int i = 0; i < MX; i++)
        {
            for (int j = 0; j < MX; j++)
            {
                board[i][j] = board_temp[i][j];
            }
        }

        //위쪽 공기청정기
        for (int i = ap_ru - 1; i > 0; i--)
            board[i][1] = board[i - 1][1];
        for (int i = 1; i < c; i++)
            board[1][i] = board[1][i + 1];
        for (int i = 1; i < ap_ru; i++)
            board[i][c] = board[i + 1][c];
        for (int i = c; i > 2; i--)
            board[ap_ru][i] = board[ap_ru][i - 1];
        board[ap_ru][2] = 0;

        //아래쪽 공기청정기
        for (int i = ap_rd + 1; i <= r; i++)
            board[i][1] = board[i + 1][1];
        for (int i = 1; i < c; i++)
            board[r][i] = board[r][i + 1];
        for (int i = r; i > ap_rd; i--)
            board[i][c] = board[i - 1][c];
        for (int i = c; i > 2; i--)
            board[ap_rd][i] = board[ap_rd][i - 1];
        board[ap_rd][2] = 0;

        // cout << "\n----------------------------\n";
        // for (int i = 1; i <= r; i++)
        // {
        //     for (int j = 1; j <= c; j++)
        //         cout << board[i][j] << ' ';
        //     cout << '\n';
        // }
        // cout << "\n----------------------------\n";
    }

    int ans = 0;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            ans += board[i][j];
    cout << ans + 2 << '\n';

    return 0;
}