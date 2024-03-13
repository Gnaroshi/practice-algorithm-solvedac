// problem: Grass Cutting
// id: 15161
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[11][11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, a, b, c, d, e, f;
    cin >> k;
    for (int i = 1; i <= 10; i++)
        fill(brd[i], brd[i] + 11, 1);
    while (k--)
    {
        for (int i = 1; i <= 10; i++)
            for (int j = 1; j <= 10; j++)
                brd[i][j]++;
        cin >> a >> b >> c >> d >> e >> f;
        for (int i = 1; i <= 10; i++)
        {
            brd[a][i] = 1;
            brd[b][i] = 1;
            brd[c][i] = 1;
            brd[i][d] = 1;
            brd[i][e] = 1;
            brd[i][f] = 1;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
            cout << brd[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}