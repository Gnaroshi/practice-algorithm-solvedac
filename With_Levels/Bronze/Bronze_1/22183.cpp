// problem: Приготовление десертов
// id: 22183
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 55;

bool P[MX][MX][MX];
int n, m, k, p, q, r, a, b, ans;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            fill(P[i][j], P[i][j] + k + 1, 1);

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a >> b;
        for (int j = 1; j <= k; j++)
            P[a][b][j] = 0;
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        for (int j = 1; j <= n; j++)
            P[j][a][b] = 0;
    }

    cin >> r;
    for (int i = 0; i < r; i++)
    {
        cin >> a >> b;
        for (int j = 1; j <= m; j++)
            P[a][j][b] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int l = 1; l <= k; l++)
                ans += P[i][j][l];

    cout << ans << '\n';

    return 0;
}