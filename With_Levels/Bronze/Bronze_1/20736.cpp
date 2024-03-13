// problem: Social running
// id: 20736
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0x3f3f3f3f, t;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        t = i - 2;
        if (t < 0)
            t += n;
        ans = min(ans, v[i] + v[t]);
    }
    cout << ans << '\n';

    return 0;
}