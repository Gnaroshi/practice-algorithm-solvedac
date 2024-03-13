// problem: 탄산 음료
// id: 5032
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, f, c, t, ans = 0;
    cin >> e >> f >> c;
    e += f;
    while (true)
    {
        t = e / c;
        if (t == 0)
            break;
        ans += t;
        e -= t * c;
        e += t;
    }
    cout << ans;

    return 0;
}