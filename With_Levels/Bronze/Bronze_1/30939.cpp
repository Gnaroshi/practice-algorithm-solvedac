// problem: Pahuljice
// id: 30939
// time taken:
#include <bits/stdc++.h>
using namespace std;

char brd[51][51];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, mx = 0, x, y;
    cin >> n >> m;
    string s;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            brd[i][j] = s[j];
            if (s[j] == '+')
            {
                q.push({i, j});
            }
        }
    }
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        tie(x, y) = cur;
        int iter = 0x3f3f3f3f, i;
        iter = max(min(x, n - x), 0);
        iter = max(min(iter, min(y, m - y)), 0);
        for (i = 1; i <= iter;)
        {
            if (brd[x + i][y] == brd[x - i][y] && brd[x + i][y] == '|')
                if (brd[x][y + i] == brd[x][y - i] && brd[x][y + i] == '-')
                    if (brd[x + i][y + i] == brd[x - i][y - i] && brd[x + i][y + i] == '\\')
                        if (brd[x - i][y + i] == brd[x + i][y - i] && brd[x + i][y - i] == '/')
                        {
                            mx = max(mx, i);
                            i++;
                            continue;
                        }
            break;
        }
    }
    cout << mx;

    return 0;
}

// 8 9
// \.|./....
// .\|/.....
// --+--.../
// ./|\.../.
// /.|.\|/..
// ....-+---
// ..../|\..
// .../.|.\.