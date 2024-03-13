// problem: Konik polny
// id: 8663
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, s, t = 0, ans = 0;
    cin >> x >> s;
    while (true)
    {
        if (t >= x)
            break;
        if (s == 1 || s == 0)
        {
            ans += x - t;
            break;
        }
        else
            t += s;
        s /= 2;
        ans++;
    }
    cout << ans;

    return 0;
}