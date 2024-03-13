// problem: Sylwester
// id: 8793
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
        int n, ans = 0, cur = 0, t;
        cin >> n;
        while (n--)
        {
            cin >> t;
            cur += t;
            if (cur < 0)
                cur++, ans++;
        }
        cout << ans + abs(cur) << '\n';
    }

    return 0;
}