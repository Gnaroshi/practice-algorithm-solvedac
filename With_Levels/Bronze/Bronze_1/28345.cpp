// problem: Image Filter
// id: 28345
// time taken:
#include <bits/stdc++.h>
using namespace std;

int h[101][101];
int f[5];
int n, m, a, b, c, ch;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> h[i][j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int mn = 0x3f3f3f3f, l = 0;
                ch = h[i][j];
                a = ((j - 1 >= 0) ? h[i][j - 1] : 0);
                b = ((i - 1 >= 0) ? h[i - 1][j] : 0);
                c = ((i - 1 >= 0 && j - 1 >= 0) ? h[i - 1][j - 1] : 0);
                f[0] = ch;
                f[1] = ch - a;
                f[2] = ch - b;
                f[3] = ch - (a + b) / 2;
                f[4] = ch - a + c - b;
                for (int k = 0; k < 5; k++)
                {
                    if (abs(f[k]) < mn)
                    {
                        mn = abs(f[k]);
                        l = k;
                    }
                }
                cout << l << ' ' << f[l] << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}