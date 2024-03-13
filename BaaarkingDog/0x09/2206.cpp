// #include <bits/stdc++.h>
// using namespace std;

// #define MX 1005
// int n, m;
// int ans = 0x7f7f7f7f;
// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};
// int board[MX][MX];

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m;
//     if (n + m <= 4)
//     {
//         cout << n + m - 2 << '\n';
//         return 0;
//     }
//     queue<pair<int, int>> walls;
//     for (int i = 1; i <= n; i++)
//     {
//         string temp;
//         cin >> temp;
//         for (int j = 1; j <= m; j++)
//         {
//             board[i][j] = temp[j - 1] - '0';
//             if (board[i][j] == 1)
//                 walls.push({i, j});
//         }
//     }
//     while (!walls.empty())
//     {
//         int temp_ans = 0x7f7f7f7f;
//         auto walls_cur = walls.front();
//         walls.pop();
//         board[walls_cur.first][walls_cur.second] = 0;
//         queue<pair<int, int>> q;
//         q.push({1, 1});
//         int dist[MX][MX];
//         for (int i = 0; i < MX; i++)
//             fill(dist[i], dist[i] + MX, -1);
//         dist[1][1] = 0;
//         while (!q.empty())
//         {
//             auto cur = q.front();
//             q.pop();
//             for (int dir = 0; dir < 4; dir++)
//             {
//                 int nx = cur.first + dx[dir];
//                 int ny = cur.second + dy[dir];
//                 if (nx < 1 || nx > n || ny < 1 || ny > m)
//                     continue;
//                 if (dist[nx][ny] != -1 || board[nx][ny] == 1)
//                     continue;
//                 dist[nx][ny] = dist[cur.first][cur.second] + 1;
//                 q.push({nx, ny});
//             }
//         }
//         board[walls_cur.first][walls_cur.second] = 1;
//         if (dist[n][m] == -1)
//             continue;
//         // cout << dist[n][m] << '\n';
//         if (dist[n][m] < ans)
//             ans = dist[n][m];
//     }

//     if (ans == 0x7f7f7f7f)
//         cout << -1 << '\n';
//     else
//         cout << ans + 1 << '\n';

//     return 0;
// } time out

#include <bits/stdc++.h>
using namespace std;

#define MX 1005
int n, m;
int ans = 0x7f7f7f7f;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[MX][MX];
int dist[MX][MX][2];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 1; j <= m; j++)
        {
            board[i][j] = temp[j - 1] - '0';
        }
    }
    // bfs
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 1});
    dist[1][1][1] = 1;
    while (!q.empty())
    {
        auto cur = q.front();
        int cx = cur.first.first;
        int cy = cur.first.second;
        int cw = cur.second;
        if (cx == n && cy == m)
        {
            ans = dist[cx][cy][cw];
            break;
        }
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < 1 || nx > n || ny < 1 || ny > m)
                continue;
            if (board[nx][ny] == 1 && cw == 1)
            {
                q.push({{nx, ny}, 0});
                dist[nx][ny][0] = dist[cx][cy][1] + 1;
            }
            else if (board[nx][ny] == 0 && dist[nx][ny][cw] == 0)
            {
                q.push({{nx, ny}, cw});
                dist[nx][ny][cw] = dist[cx][cy][cw] + 1;
            }
        }
    }
    if (ans == 0x7f7f7f7f)
        cout
            << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}