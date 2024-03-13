// problem: Archaeological Digs
// id: 5088
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[105][105];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    while (true)
    {
        int m, n, a, b, cnt = 0;
        cin >> x >> y;
        if (x + y == 0)
            break;
        for (int i = 0; i < 105; i++)
            fill(brd[i], brd[i] + 105, 0);
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            brd[a][b]++;
        }
        cin >> n;
        while (n--)
        {
            cin >> a >> b;
            cnt += brd[a][b];
        }
        cout << cnt << "\n";
    }

    return 0;
}