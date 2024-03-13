// problem: ソーシャルゲーム (Social Game)
// id: 16785
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, ans = 0, t = 0;
    cin >> a >> b >> c;
    while (t < c)
    {
        t += a;
        ans++;
        if (ans % 7 == 0)
            t += b;
    }
    cout << ans;

    return 0;
}