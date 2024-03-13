// problem: Рамки
// id: 27268
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n, r1, c1, r2, c2;
    cin >> h >> w >> n;
    char **brd = (char **)malloc(sizeof(char *) * h + 1);
    for (int i = 0; i < h + 1; i++)
    {
        brd[i] = (char *)malloc(sizeof(char) * w + 1);
        fill(brd[i], brd[i] + w + 1, '.');
    }

    for (int i = 0; i < n; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        for (int j = r1; j <= r2; j++)
            brd[j][c1] = char('a' + i);
        for (int j = r1; j <= r2; j++)
            brd[j][c2] = char('a' + i);
        for (int j = c1; j <= c2; j++)
            brd[r1][j] = char('a' + i);
        for (int j = c1; j <= c2; j++)
            brd[r2][j] = char('a' + i);
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
            cout << brd[i][j];
        cout << '\n';
    }

    return 0;
}
