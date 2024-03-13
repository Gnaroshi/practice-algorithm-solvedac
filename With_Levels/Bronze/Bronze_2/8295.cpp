// problem: Rectangles
// id: 8295
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p, ans = 0;
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (i * 2 + j * 2 >= p)
                ans += (n - i + 1) * (m - j + 1);
    cout << ans;

    return 0;
}