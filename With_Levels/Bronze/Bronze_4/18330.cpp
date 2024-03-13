// problem: Petrol
// id: 18330
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    k += 60;
    if (n >= k)
    {
        ans += (n - k) * 3000;
        ans += k * 1500;
    }
    else
        ans += n * 1500;
    cout << ans << '\n';

    return 0;
}