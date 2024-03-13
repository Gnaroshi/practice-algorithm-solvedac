#include <bits/stdc++.h>
using namespace std;

int board[102][102];
int vist[102][102];
int virus[102];
queue<pair<int, int>> Q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cmptrs;
    cin >> cmptrs;
    int tc;
    cin >> tc;
    for (int i = 0; i < 102; i++)
    {
        fill(board[i], board[i] + 102, 0);
        fill(vist[i], vist[i] + 102, 0);
    }

    for (int i = 0; i < tc; i++)
    {
        int x, y;
        cin >> x >> y;
        board[x][y] = 1;
        if (x == 1 || y == 1)
        {
            Q.push({x, y});
        }
    }

    virus[1] = 1;
    vist[1][1] = 1;

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        if (vist[cur.first][cur.second] == 1)
            continue;

        virus[cur.first] = 1;
        virus[cur.second] = 1;

        for (int i = 1; i <= cmptrs; i++)
        {
            if (board[cur.second][i] == 1)
            {
                Q.push({cur.second, i});
            }
            if (board[i][cur.second] == 1)
            {
                Q.push({i, cur.second});
            }
            if (board[cur.first][i] == 1)
            {
                Q.push({cur.first, i});
            }
            if (board[i][cur.first] == 1)
            {
                Q.push({i, cur.first});
            }
        }
        vist[cur.first][cur.second] = 1;
    }
    int cnt = 0;
    for (int i = 0; i <= cmptrs; i++)
    {
        if (virus[i + 1] == 1)
        {
            cnt++;
        }
    }

    cout << cnt - 1 << '\n';

    return 0;
}
