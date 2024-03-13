#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int r, c;
char board[1001][1001];
int distJ[1001][1001];
int distF[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> QJ;
queue<pair<int, int>> QF;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        fill(distJ[i], distJ[i] + c, -1);
        fill(distF[i], distF[i] + c, -1);
    }
    for (int i = 0; i < r; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < c; j++)
        {
            board[i][j] = temp[j];
            if (temp[j] == 'F')
            {
                QF.push({i, j});
                distF[i][j] = 0;
            }
            if (temp[j] == 'J')
            {
                QJ.push({i, j});
                distJ[i][j] = 0;
            }
        }
    }

    while (!QF.empty())
    {
        auto cur = QF.front();
        QF.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                continue;
            if (distF[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            distF[nx][ny] = distF[cur.X][cur.Y] + 1;
            QF.push({nx, ny});
        }
    }

    while (!QJ.empty())
    {
        auto cur = QJ.front();
        QJ.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            {
                cout << distJ[cur.X][cur.Y] + 1 << '\n';
                return 0;
            }
            if (distJ[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            if (distF[nx][ny] != -1)
            {
                if (distF[nx][ny] <= distJ[cur.X][cur.Y] + 1)
                    continue;
            }
            distJ[nx][ny] = distJ[cur.X][cur.Y] + 1;
            QJ.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE" << '\n';

    return 0;
}
