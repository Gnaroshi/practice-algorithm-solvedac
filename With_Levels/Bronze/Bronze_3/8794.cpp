// problem: Poniedziałki
// id: 8794
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
        int n, m, l, ans;
        cin >> n >> m >> l;
        ans = (n - m + l - 1) / m + ((n - m + l - 1) % m ? 1 : 0) + (l == 1);
        cout << ans << '\n';
    }

    return 0;
}
