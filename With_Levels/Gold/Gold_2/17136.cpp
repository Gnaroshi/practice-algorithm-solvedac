// problem: 색종이 붙이기
// id: 17136
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 10;

int ans = 30;
int cnt[5];
int brd[MX][MX];
bool chk[MX][MX];

void dfs(int x, int y, int s)
{
    if (x >= 9 && y > 9)
    {
        ans = min(ans, s);
        return;
    }
    if (ans <= s)
        return;
    if (y > 9)
    {
        dfs(x + 1, 0, s);
        return;
    }

    if (brd[x][y] == 1)
    {
        for (int a = 4; a >= 0; a--)
        {
            if (cnt[a])
            {
                bool tchk = true;
                for (int i = x; i <= x + a; i++)
                {
                    for (int j = y; j <= y + a; j++)
                    {
                        if (i < 0 || i >= 10 || j < 0 || j >= 10)
                        {
                            tchk = false;
                            break;
                        }
                        if (brd[i][j] == 0)
                        {
                            tchk = false;
                            break;
                        }
                    }
                    if (!tchk)
                        break;
                }
                if (tchk)
                {
                    for (int i = x; i <= x + a; i++)
                        for (int j = y; j <= y + a; j++)
                            brd[i][j] = 0;
                    cnt[a]--;
                    dfs(x, y + 1, s + 1);
                    for (int i = x; i <= x + a; i++)
                        for (int j = y; j <= y + a; j++)
                            brd[i][j] = 1;
                    cnt[a]++;
                }
            }
        }
    }
    else
        dfs(x, y + 1, s);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(cnt, cnt + 5, 5);
    for (int i = 0; i < MX; i++)
        for (int j = 0; j < MX; j++)
            cin >> brd[i][j];

    dfs(0, 0, 0);

    if (ans == 30)
    {
        cout << -1;
        return 0;
    }
    else
        cout << ans;

    return 0;
}