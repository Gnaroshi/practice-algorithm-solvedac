// problem: In the Shower
// id: 11176
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
        int e, n;
        cin >> e >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if (t > e)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}