// problem: Gift
// id: 9848
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, bef, ans = 0;
    cin >> n >> k;
    cin >> bef;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (bef - t >= k)
            ans++;
        bef = t;
    }

    cout << ans;
    return 0;
}