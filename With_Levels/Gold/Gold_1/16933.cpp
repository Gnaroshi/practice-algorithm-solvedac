// problem: 벽 부수고 이동하기 3
// id: 16933
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int dst[11][1005][1005][2];
int brd[1005][1005];
int n, m, k, ans = 0x3f3f3f3f;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            brd[i][j] = s[j] - '0';
    }

    queue<tuple<int, int, int, int>> q;
    q.push({0, 0, 0, 0});
    dst[0][0][0][0] = 1;
    while (!q.empty())
    {
        int cx, cy, ck, d;
        tie(ck, cx, cy, d) = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (brd[nx][ny])
            {
                if (ck < k)
                {
                    if (d)
                    {
                        if (dst[ck][cx][cy][!d] == 0)
                        {
                            dst[ck][cx][cy][!d] = dst[ck][cx][cy][d] + 1;
                            q.push({ck, cx, cy, !d});
                        }
                    }
                    else
                    {
                        if (dst[ck + 1][nx][ny][!d] == 0)
                        {
                            dst[ck + 1][nx][ny][!d] = dst[ck][cx][cy][d] + 1;
                            q.push({ck + 1, nx, ny, !d});
                        }
                    }
                }
                else
                    continue;
            }
            else
            {
                if (dst[ck][nx][ny][!d] == 0)
                {
                    dst[ck][nx][ny][!d] = dst[ck][cx][cy][d] + 1;
                    q.push({ck, nx, ny, !d});
                }
            }
        }
    }

    for (int i = 0; i <= k; i++)
    {
        if (dst[i][n - 1][m - 1][0])
            ans = min(ans, dst[i][n - 1][m - 1][0]);
        if (dst[i][n - 1][m - 1][1])
            ans = min(ans, dst[i][n - 1][m - 1][1]);
    }
    if (ans == 0x3f3f3f3f)
        cout << -1;
    else
        cout << ans;

    return 0;
}

// 아래 코드는 탐색 중 끝에 도달하면 즉시 출력 후 종료하는 코드
// 반복문 루프의 총 횟수가 커서 오히려 비교문 때문에 시간이 더 소요됨
// 위 코드: 1052ms, 아래 코드: 1180ms
//  // problem: 벽 부수고 이동하기 3
//  // id: 16933
//  // time taken:
//  #include <bits/stdc++.h>
//  using namespace std;

// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, -1, 0, 1};
// int dst[11][1005][1005][2];
// int brd[1005][1005];
// int n, m, k, ans = 0x3f3f3f3f;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m >> k;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         for (int j = 0; j < m; j++)
//             brd[i][j] = s[j] - '0';
//     }

//     queue<tuple<int, int, int, int>> q;
//     q.push({0, 0, 0, 0});
//     dst[0][0][0][0] = 1;
//     while (!q.empty())
//     {
//         int cx, cy, ck, d;
//         tie(ck, cx, cy, d) = q.front();
//         q.pop();
//         if (cx == n - 1 && cy == m - 1)
//         {
//             cout << dst[ck][cx][cy][d];
//             return 0;
//         }
//         for (int dir = 0; dir < 4; dir++)
//         {
//             int nx = cx + dx[dir];
//             int ny = cy + dy[dir];
//             if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//                 continue;
//             if (brd[nx][ny])
//             {
//                 if (ck < k)
//                 {
//                     if (d)
//                     {
//                         if (dst[ck][cx][cy][!d] == 0)
//                         {
//                             dst[ck][cx][cy][!d] = dst[ck][cx][cy][d] + 1;
//                             q.push({ck, cx, cy, !d});
//                         }
//                     }
//                     else
//                     {
//                         if (dst[ck + 1][nx][ny][!d] == 0)
//                         {
//                             dst[ck + 1][nx][ny][!d] = dst[ck][cx][cy][d] + 1;
//                             q.push({ck + 1, nx, ny, !d});
//                         }
//                     }
//                 }
//                 else
//                     continue;
//             }
//             else
//             {
//                 if (dst[ck][nx][ny][!d] == 0)
//                 {
//                     dst[ck][nx][ny][!d] = dst[ck][cx][cy][d] + 1;
//                     q.push({ck, nx, ny, !d});
//                 }
//             }
//         }
//     }

//     cout << -1;

//     return 0;
// }