// problem: Bomb
// id: 26579
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, r, c, mx, x, y, nx, ny, ax, ay, cnt;
    cin >> tc;
    while (tc--)
    {
        cin >> r >> c;
        mx = 0;
        string s;
        vector<string> v(r);
        queue<pair<int, int>> q;
        for (int i = 0; i < r; i++)
        {
            cin >> s;
            v[i] = s;
            for (int j = 0; j < c; j++)
            {
                if (s[j] == '.')
                    q.push({i, j});
            }
        }

        while (!q.empty())
        {
            tie(x, y) = q.front();
            q.pop();
            cnt = 0;
            for (int dir = 0; dir < 4; dir++)
            {
                nx = x, ny = y;
                while (true)
                {
                    if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                        break;
                    if (v[nx][ny] == '#')
                        break;
                    if (v[nx][ny] == '@')
                        cnt++;
                    nx += dx[dir], ny += dy[dir];
                }
            }
            if (mx < cnt)
            {
                ax = x, ay = y;
                mx = cnt;
            }
        }
        cout << ax << ", " << ay << '\n';
    }

    return 0;
}