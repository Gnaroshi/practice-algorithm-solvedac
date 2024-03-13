// problem: Bailout Bonus
// id: 5157
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
        int c, b, n, r, t, tt;
        int ans = 0;
        cin >> c >> b >> n >> r;
        int *bs = (int *)malloc(sizeof(int) * c + 1);
        fill(bs, bs + c + 1, 0);
        for (int j = 0; j < b; j++)
        {
            cin >> t;
            bs[t] = 1;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> t >> tt;
            if (bs[t])
                ans += tt * r / 100;
        }
        cout << "Data Set " << i << ":\n"
             << ans << "\n\n";
    }

    return 0;
}