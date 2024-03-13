// problem: 이동하기 3
// id: 18795
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, ans = 0, a, b;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans += a;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        ans += a;
    }
    cout << ans;

    return 0;
}