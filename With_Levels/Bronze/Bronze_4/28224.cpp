// problem: Final Price
// id: 28224
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    long long ans = 0, t;

    while (tc--)
    {
        cin >> t;
        ans += t;
    }
    cout << ans;

    return 0;
}