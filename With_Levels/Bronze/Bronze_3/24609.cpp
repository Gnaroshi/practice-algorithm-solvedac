// problem: Overdraft
// id: 24609
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    long long t, ans = 0, cur = 0;
    while (tc--)
    {
        cin >> t;
        cur += t;
        if (cur < 0)
        {
            ans += cur * -1;
            cur = 0;
        }
    }
    cout << ans;

    return 0;
}