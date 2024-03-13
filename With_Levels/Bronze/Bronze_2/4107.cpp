// problem: Knitting
// id: 4107
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    while (true)
    {
        cin >> n >> m >> k;
        if (!n && !m && !k)
            break;
        int *p = (int *)malloc(sizeof(int) * k);
        for (int i = 0; i < k; i++)
            cin >> p[i];
        int ans = 0;
        int st = n;
        for (int i = 0; i < m; i++)
        {
            ans += st;
            st += p[i % k];
        }
        cout << ans << '\n';
    }

    return 0;
}