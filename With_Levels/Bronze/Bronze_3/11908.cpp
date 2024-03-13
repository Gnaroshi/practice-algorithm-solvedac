// problem: 카드
// id: 11908
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, mx = -1, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mx = max(mx, t);
        ans += t;
    }
    cout << ans - mx;

    return 0;
}