// problem: E번 - 펭귄의 하루
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y, hx, hy;
    cin >> n >> m;
    char **brd = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        brd[i] = (char *)malloc(sizeof(char) * m);
    vector<pair<int, int>> f;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            brd[i][j] = s[j];
            if (s[j] == 'S')
                x = i, y = j;
            else if (s[j] == 'F')
                f.push_back({i, j});
            else if (s[j] == 'H')
                hx = i, hy = j;
        }
    }
    queue<pair<int, int>> q;
    q.push({x, y});
    bool chk = false;
    int **dist = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = (int *)malloc(sizeof(int) * m);
        fill(dist[i], dist[i] + m, -1);
    }
    int **fist = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        fist[i] = (int *)malloc(sizeof(int) * m);
        fill(fist[i], fist[i] + m, -1);
    }
    dist[x][y] = 0;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int cx = cur.first + dx[dir];
            int cy = cur.second + dy[dir];
            if (cx >= n || cx < 0 || cy > m || cy < 0)
                continue;
            if (brd[cx][cy] == 'D' || dist[cx][cy] != -1)
                continue;
            if (brd[cx][cy] == 'F')
            {
                chk = true;
                if (fist[cx][cy] == -1)
                    fist[cx][cy] = dist[cur.first][cur.second] + 1;
                else
                    fist[cx][cy] = min(fist[cx][cy], dist[cur.first][cur.second] + 1);
            }

            dist[cx][cy] = dist[cur.first][cur.second] + 1;
            q.push({cx, cy});
        }
    }
    if (!chk)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n; i++)
        fill(dist[i], dist[i] + m, -1);
    q.push({hx, hy});
    dist[hx][hy] = 0;
    int ans = 0x3f3f3f3f;
    chk = false;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int cx = cur.first + dx[dir];
            int cy = cur.second + dy[dir];
            if (cx >= n || cx < 0 || cy > m || cy < 0)
                continue;
            if (brd[cx][cy] == 'D' || dist[cx][cy] != -1)
                continue;
            if (brd[cx][cy] == 'F' && fist[cx][cy] != -1)
            {
                chk = true;
                ans = min(ans, dist[cur.first][cur.second] + 1 + fist[cx][cy]);
            }

            dist[cx][cy] = dist[cur.first][cur.second] + 1;
            q.push({cx, cy});
        }
    }
    if (chk)
        cout << ans;
    else
        cout << -1;

    return 0;
}