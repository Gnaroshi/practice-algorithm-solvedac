// problem: Tetrahedral Stacks of Cannonballs
// id: 4482
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, ans = 0, t = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            t += i;
            ans += t;
        }

        cout << tcc << ": " << n << ' ' << ans << '\n';
    }

    return 0;
}