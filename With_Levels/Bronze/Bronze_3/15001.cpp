// problem: Frog Leaps
// id: 15001
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, bef, t, ans = 0;
    cin >> n >> bef;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        ans += (t - bef) * (t - bef);
        bef = t;
    }
    cout << ans;

    return 0;
}