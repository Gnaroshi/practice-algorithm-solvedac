// problem: D번 - Array Rotation
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, o, a;
    cin >> n;
    int **b = (int **)malloc(sizeof(int *) * n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        b[i] = (int *)malloc(sizeof(int) * n + 1);
        fill(b[i], b[i] + n + 1, 0);
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    cin >> q;
    while (q--)
    {
        cin >> o;
        if (o == 1)
        {
            cin >> a;
            int t = b[a][n];
            for (int i = n; i >= 2; i--)
            {
                b[a][i] = b[a][i - 1];
            }
            b[a][1] = t;
        }
        else
        {
            int **nw = (int **)malloc(sizeof(int *) * n + 1);
            for (int i = 0; i < n + 1; i++)
            {
                nw[i] = (int *)malloc(sizeof(int) * n + 1);
                fill(nw[i], nw[i] + n + 1, 0);
            }
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= n; j++)
                    nw[j][n - i + 1] = b[i][j];
            b = nw;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << b[i][j] << ((j < n) ? ' ' : '\n');
        }
    }

    return 0;
}