#include <bits/stdc++.h>
using namespace std;

#define MX 9

// board is for input
// board_temp is for checking
int n, m;
int board[MX][MX];
int board_temp[MX][MX];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<pair<int, int>> ct;

// dir: 0 = up, 1 = right, 2 = down, 3 = left
// board 7 for checked

void fill_board(int x, int y, int dir)
{
    dir %= 4;
    while (true)
    {
        x += dx[dir];
        y += dy[dir];
        if (x < 0 || x >= n || y < 0 || y >= m)
            return;
        if (board_temp[x][y] == 6)
            return;
        if (board_temp[x][y] != 0)
            continue;
        board_temp[x][y] = 7;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int blank_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] != 0 && board[i][j] != 6)
            {
                ct.push_back({i, j});
            }
            if (board[i][j] == 0)
                blank_cnt++;
        }
    }

    // to use 4th, get 4^k
    int iter = 1;
    for (int i = 0; i < ct.size(); i++)
    {
        iter *= 4;
    }
    iter *= 2;
    //(1 << (2 * ct.size())) right shift

    for (int k = 0; k < iter; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                board_temp[i][j] = board[i][j];
            }
        }

        int temp = k;
        for (int i = 0; i < ct.size(); i++)
        {
            int dir = temp % 4;
            temp /= 4;
            int x = ct[i].first;
            int y = ct[i].second;

            // for each cctv's direction
            if (board[x][y] == 1)
            {
                fill_board(x, y, dir);
            }
            else if (board[x][y] == 2)
            {
                fill_board(x, y, dir);
                fill_board(x, y, dir + 2);
            }
            else if (board[x][y] == 3)
            {
                fill_board(x, y, dir);
                fill_board(x, y, dir + 1);
            }
            else if (board[x][y] == 4)
            {
                fill_board(x, y, dir);
                fill_board(x, y, dir + 1);
                fill_board(x, y, dir + 2);
            }
            else if (board[x][y] == 5)
            {
                fill_board(x, y, dir);
                fill_board(x, y, dir + 1);
                fill_board(x, y, dir + 2);
                fill_board(x, y, dir + 3);
            }
        }

        int temp_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                temp_cnt += (board_temp[i][j] == 0);
            }
        }
        blank_cnt = min(blank_cnt, temp_cnt);
    }

    cout << blank_cnt << '\n';

    return 0;
}