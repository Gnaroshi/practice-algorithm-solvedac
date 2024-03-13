// problem: Walktober
// id: 26432
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int m, n, p, s;
        cin >> m >> n >> p;
        int *mx = (int *)malloc(sizeof(int) * n);
        fill(mx, mx + n, 0);
        int *jhn = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> s;
                mx[k] = max(mx[k], s);
                if (j == p - 1)
                    jhn[k] = s;
            }
        }

        int ans = 0;
        for (int j = 0; j < n; j++)
            ans += mx[j] - jhn[j];

        cout << "Case #" << i << ": " << ans << '\n';
    }

    return 0;
}