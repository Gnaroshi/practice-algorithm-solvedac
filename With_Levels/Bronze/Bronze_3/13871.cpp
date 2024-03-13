// problem: Farm robot
// id: 13871
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, s, l = 1, t, ans = 0;
    cin >> n >> c >> s;

    for (int i = 0; i < c; i++)
    {
        cin >> t;
        if (l == s)
            ans++;
        l += t;
        if (l > n)
            l -= n;
        if (l < 1)
            l += n;
    }
    if (l == s)
        ans++;
    cout << ans;

    return 0;
}