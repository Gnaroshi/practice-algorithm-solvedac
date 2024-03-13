// problem: 주식 투자
// id: 13416
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, t, mx;
        int ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            mx = 0;
            for (int j = 0; j < 3; j++)
            {
                cin >> t;
                mx = max(mx, t);
            }
            ans += mx;
        }
        cout << ans << '\n';
    }

    return 0;
}