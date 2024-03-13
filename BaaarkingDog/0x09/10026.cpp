#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
char pntRGB[101][101];
char pntRG[101][101];
int vistRGB[101][101];
int vistRG[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cr = 0;
int cg = 0;
int cb = 0;
int crg = 0;

// RGB, R=GB

int main(void)
{
    int n;
    cin >> n;
    deque<pair<int, int>> RQ;
    deque<pair<int, int>> GQ;
    deque<pair<int, int>> BQ;
    deque<pair<int, int>> RGQ;
    for (int i = 0; i < n; i++)
    {
        fill(vistRGB[i], vistRGB[i] + n, -1);
        fill(vistRG[i], vistRG[i] + n, -1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> pntRGB[i][j];
            if (pntRGB[i][j] == 'G')
            {
                pntRG[i][j] = 'R';
                GQ.push_back({i, j});
                RGQ.push_back({i, j});
            }
            else if (pntRGB[i][j] == 'R')
            {
                pntRG[i][j] = 'R';
                RQ.push_back({i, j});
                RGQ.push_back({i, j});
            }
            else // B
            {
                pntRG[i][j] = 'B';
                BQ.push_back({i, j});
            }
        }
    }

    while (!RQ.empty())
    {
        auto cur = RQ.front();
        RQ.pop_front();
        if (vistRGB[cur.X][cur.Y] == -1)
        {

            cr++;
        }
        vistRGB[cur.X][cur.Y] = 1;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (pntRGB[nx][ny] != 'R')
                continue;
            if (vistRGB[nx][ny] != -1)
                continue;
            vistRGB[nx][ny] = 1;
            RQ.push_front({nx, ny});
        }
    }

    while (!GQ.empty())
    {
        auto cur = GQ.front();
        GQ.pop_front();
        if (vistRGB[cur.X][cur.Y] == -1)
            cg++;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (pntRGB[nx][ny] != 'G')
                continue;
            if (vistRGB[nx][ny] != -1)
                continue;
            vistRGB[nx][ny] = 1;
            GQ.push_front({nx, ny});
        }
    }
    while (!BQ.empty())
    {
        auto cur = BQ.front();
        BQ.pop_front();
        if (vistRGB[cur.X][cur.Y] == -1)
            cb++;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (pntRGB[nx][ny] != 'B')
                continue;
            if (vistRGB[nx][ny] != -1)
                continue;
            vistRGB[nx][ny] = 1;
            BQ.push_front({nx, ny});
        }
    }
    while (!RGQ.empty())
    {
        auto cur = RGQ.front();
        RGQ.pop_front();
        if (vistRG[cur.X][cur.Y] == -1)
            crg++;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (pntRG[nx][ny] == 'B')
                continue;
            if (vistRG[nx][ny] != -1)
                continue;
            vistRG[nx][ny] = 1;
            RGQ.push_front({nx, ny});
        }
    }

    cout << cr + cg + cb << '\n';
    cout << crg + cb << '\n';
    return 0;
}