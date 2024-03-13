// problem: 욱제는 효도쟁이야!!
// id: 14487
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
        ans += t;
        mx = max(t, mx);
    }
    cout << ans - mx;

    return 0;
}