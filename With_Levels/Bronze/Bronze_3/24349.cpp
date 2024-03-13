// problem: МЕД
// id: 24349
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n != 1)
    {
        ans += min(a, b);
        n--;
    }
    int mn = min(min(a, b), c);
    while (n > 1)
    {
        ans += mn;
        n--;
    }
    cout << ans / 100 << ' ' << ans % 100;

    return 0;
}