// problem: 큐브 더미
// id: 27982
// time taken:
#include <bits/stdc++.h>
using namespace std;

int a[6][6][6];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int q, w, e;
        cin >> q >> w >> e;
        a[q][w][e] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if (a[i][j][k] == 0)
                    continue;
                if (a[i - 1][j][k] == 1 && a[i + 1][j][k] == 1)
                {
                    if (a[i][j - 1][k] == 1 && a[i][j + 1][k] == 1)
                    {
                        if (a[i][j][k - 1] == 1 && a[i][j][k + 1] == 1)
                            ans++;
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}