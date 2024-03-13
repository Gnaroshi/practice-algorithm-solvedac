// problem: 헌내기는 친구가 필요해
// id: 21736
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m, ans, x, y;
char brd[605][605];
bool vst[605][605];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            brd[i][j] = s[j];
            if (s[j] == 'I')
                x = i, y = j;
        }
    }

    queue<pair<int, int>> q;
    q.push({x, y});
    vst[x][y] = 1;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int cx = cur.first + dx[dir];
            int cy = cur.second + dy[dir];
            if (cx < 0 || cx >= n || cy < 0 || cy >= m)
                continue;
            if (vst[cx][cy] || brd[cx][cy] == 'X')
                continue;
            if (brd[cx][cy] == 'P')
                ans++;
            vst[cx][cy] = 1;
            q.push({cx, cy});
        }
    }
    if (ans)
        cout << ans;
    else
        cout << "TT";

    return 0;
}