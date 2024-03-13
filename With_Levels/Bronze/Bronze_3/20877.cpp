// problem: Minigolf
// id: 20877
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ans += ((t > 7 ? 7 : t) - ((i % 2 ? 3 : 2)));
    }
    cout << ans;

    return 0;
}