// problem: 369
// id: 17614
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        int t = i, tr = 0, r;
        while (t > 0)
        {
            r = t % 10;
            if (r == 3 || r == 6 || r == 9)
                tr++;
            t /= 10;
        }
        ans += tr;
    }
    cout << ans;
    return 0;
}