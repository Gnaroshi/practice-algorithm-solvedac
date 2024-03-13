// problem: Топот котов
// id: 20017
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a;
    cin >> n >> m >> a;
    int **ca = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        ca[i] = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ca[i][j];

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ca[i + 1][j] > 2 * ca[i][j])
                ans += a;
        }
    }

    cout << ans;
    return 0;
}