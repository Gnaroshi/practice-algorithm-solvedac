// problem: Painting Party
// id: 9301
// time taken:
#include <bits/stdc++.h>
using namespace std;

char brd[101][101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, tcc = 1;
    cin >> tc;
    while (tc--)
    {
        cout << "Case " << tcc++ << ":\n";
        for (int i = 0; i < 101; i++)
            fill(brd[i], brd[i] + 101, '.');
        int n, m, x, y, w, h;
        string s;
        char c;
        cin >> n >> m;
        while (m--)
        {
            cin >> s >> x >> y >> w >> h >> c;
            if (s[0] == 'F')
            {
                for (int i = x; i < x + w; i++)
                    for (int j = y; j < y + h; j++)
                        brd[i][j] = c;
            }
            else
            {
                for (int i = x; i < x + w; i++)
                {
                    for (int j = y; j < y + h; j++)
                    {
                        if (i == x || i == x + w - 1 || j == y || j == y + h - 1)
                            brd[i][j] = c;
                    }
                }
            }
        }
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= n; j++)
                cout << brd[j][i];
            cout << '\n';
        }
    }

    return 0;
}