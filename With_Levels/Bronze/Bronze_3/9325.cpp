// problem: 얼마?
// id: 9325
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
        int s, n, q, p;
        int ans = 0;
        cin >> s >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> q >> p;
            ans += q * p;
        }
        cout << ans + s << '\n';
    }

    return 0;
}