// problem: 달팽이2
// id: 1952
// time taken:
#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0, dir = 0, cnt, x = 0, y = 0;
    cin >> n >> m;
    bool **vist = (bool **)malloc(sizeof(bool *) * n);
    for (int i = 0; i < n; i++)
    {
        vist[i] = (bool *)malloc(sizeof(bool) * m);
        fill(vist[i], vist[i] + m, false);
    }
    cnt = n * m;
    while (true)
    {
        if (cnt == 1)
            break;
        vist[x][y] = 1;
        int cx = x + dx[dir];
        int cy = y + dy[dir];
        if (cx >= n || cx < 0 || cy >= m || cy < 0)
        {
            cx -= dx[dir];
            cy -= dy[dir];
            dir++;
            ans++;
            dir %= 4;
            continue;
        }
        else if (vist[cx][cy] == 1)
        {
            cx -= dx[dir];
            cy -= dy[dir];
            dir++;
            ans++;
            dir %= 4;
            continue;
        }
        x = cx, y = cy;
        cnt--;
    }
    cout << ans;

    return 0;
}