#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[26][26];
int vist[26][26];
int area[626];

int main(void)
{
    int n;
    cin >> n;
    string temp;
    deque<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        fill(vist[i], vist[i] + n, -1);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = temp[j] - 48;
            if (board[i][j] == 1)
                Q.push_back({i, j});
        }
    }
    int cnt = 0;
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop_front();
        if (vist[cur.X][cur.Y] == -1)
            cnt++;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (board[nx][ny] == 0)
                continue;
            if (vist[nx][ny] != -1)
                continue;
            vist[nx][ny] = 1;
            area[cnt - 1]++;
            Q.push_front({nx, ny});
        }
    }
    cout << cnt << '\n';
    sort(area, area + cnt);
    if (cnt == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (area[i] == 0)
            cout << area[i] + 1 << '\n';
        else
            cout << area[i] << '\n';
    }
    return 0;
}
