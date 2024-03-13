// problem: Inspiration
// id: 16715
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = -1, ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int t = 0, c = n;
        while (c > 0)
        {
            t += c % i;
            c /= i;
        }
        if (t > mx)
        {
            mx = t;
            ans = i;
        }
    }
    cout << mx << ' ' << ans << '\n';

    return 0;
}