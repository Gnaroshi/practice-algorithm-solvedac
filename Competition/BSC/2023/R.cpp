// problem: R번 - 3차원 지뢰찾기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
char brd[101][101][101];
int ans[101][101][101];
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 0, 0};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c, h;
    cin >> r >> c >> h;
    string s;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < r; i++)
        {
            cin >> s;
            for (int j = 0; j < c; j++)
                brd[k][i][j] = s[j];
        }
    }
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int cnt = 0;
                if (brd[k][i][j] == '.')
                {
                    for (int dir = 0; dir < 26; dir++)
                    {
                        int cx = i + dx[dir];
                        int cy = j + dy[dir];
                        int cz = k + dz[dir];
                        if (cx >= r || cx < 0 || cy >= c || cy < 0 || cz >= h || cz < 0)
                            continue;
                        if (brd[cz][cx][cy] == '*')
                            cnt++;
                    }
                }
                ans[k][i][j] = cnt % 10;
            }
        }
    }
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (brd[k][i][j] == '*')
                    cout << '*';
                else
                    cout << ans[k][i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}