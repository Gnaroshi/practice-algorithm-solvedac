// problem: Samochody
// id: 8659
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ans = 0, cnt = 0, n, t;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t)
            ans += cnt;
        else
            cnt++;
    }
    cout << ans;

    return 0;
}