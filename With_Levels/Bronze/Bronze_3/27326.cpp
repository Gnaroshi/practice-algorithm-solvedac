// problem: 二人三脚 (Three-Legged Race)
// id: 27326
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    int *g = (int *)malloc(sizeof(int) * n + 1);
    fill(g, g + n + 1, 0);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        cin >> t;
        g[t]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (g[i] != 2)
        {
            cout << i;
            break;
        }
    }

    return 0;
}