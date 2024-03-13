// #include <bits/stdc++.h>
// using namespace std;

// #define X first
// #define Y second

// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};
// int board[101][101];
// int vist[101][101];
// int area[102][10102];
// int areacnt[101];

// bool compare(int a, int b)
// {
//     return a > b;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     int mx = -1;
//     deque<pair<int, int>> Q;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> board[i][j];

//             if (mx < board[i][j])
//                 mx = board[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         fill(area[i], area[i] + n, 0);
//     }

//     int ans = -1;
//     int temp;
//     int tempmx = -1;
//     for (int i = 1; i < mx; i++)
//     {
//         temp = 0;
//         for (int j = 0; j < n; j++)
//         {
//             fill(vist[j], vist[j] + n, -1);
//         }
//         for (int ii = 0; ii < n; ii++)
//         {
//             for (int jj = 0; jj < n; jj++)
//             {
//                 if (board[ii][jj] > i)
//                 {
//                     // cout << "board: " << board[ii][jj] << " i: " << i << '\n';
//                     Q.push_back({ii, jj});
//                 }
//             }
//         }
//         cout << "height: " << i << " ";
//         cout << "qs: " << Q.size() << '\n';
//         while (!Q.empty())
//         {
//             // cout << "temp: " << temp << '\n';
//             // cout << '\n';
//             // for (int aa = 0; aa < n; aa++)
//             // {
//             //     for (int bb = 0; bb < n; bb++)
//             //     {
//             //         cout << vist[aa][bb];
//             //     }
//             //     cout << '\n';
//             // }
//             auto cur = Q.front();
//             Q.pop_front();
//             if (vist[cur.X][cur.Y] == -1)
//             {
//                 temp++;
//                 vist[cur.X][cur.Y] = 1;
//             }
//             int cnt = 0;
//             for (int dir = 0; dir < 4; dir++)
//             {
//                 int nx = cur.X + dx[dir];
//                 int ny = cur.Y + dy[dir];
//                 if (nx < 0 || nx > n || ny < 0 || ny > n)
//                     continue;
//                 if (board[nx][ny] <= i )
//                 {
//                     cnt++;
//                     continue;
//                 }
//                 if (vist[nx][ny] != -1)
//                     continue;

//                 vist[nx][ny] = 1;
//                 area[i - 1][temp - 1]++;
//                 Q.push_front({nx, ny});
//             }
//             cout << "cnt: " << cnt << '\n';
//             if (cnt == 4)
//                 temp++;
//         }

//         areacnt[i] = temp;
//     }
//     for (int i = 0; i < mx; i++)
//     {
//         sort(area[i], area[i] + n, compare);
//         if (tempmx < area[i][0])
//             tempmx = area[i][0];
//     }
//     cout << '\n';
//     for (int i = 0; i < mx; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << area[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     sort(areacnt, areacnt + n, compare);
//     cout << "areacnt: " << areacnt[0] << '\n';
//     cout << tempmx << '\n';
//     return 0;
// }
// 1로만 이루어졌다면 cnt 불가
// 212 121 212 와 같이 체스판 모양 cnt 불가
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
int mx, mxcnt;
int area[102][102];
int vist[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int i, int j, int flood)
{
    queue<pair<int, int>> Q;
    vist[i][j] = 1;
    Q.push({i, j});
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;
            if (vist[nx][ny] == -1)
            {
                if (area[nx][ny] > flood)
                {
                    vist[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    mx = -1;
    mxcnt = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> area[i][j];
            if (mx < area[i][j])
                mx = area[i][j];
        }
    }

    int temp;
    for (int flood = 0; flood <= mx; flood++)
    {
        for (int i = 0; i < n; i++)
            fill(vist[i], vist[i] + n, -1);
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (area[i][j] > flood)
                {
                    if (vist[i][j] == -1)
                    {
                        bfs(i, j, flood);
                        temp++;
                    }
                }
            }
        }
        if (mxcnt < temp)
            mxcnt = temp;
    }
    cout << mxcnt << '\n';
    return 0;
}