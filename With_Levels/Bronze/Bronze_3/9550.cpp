// problem: 아이들은 사탕을 좋아해
// id: 9550
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, t, ans = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ans += t / k;
        }
        cout << ans << '\n';
    }

    return 0;
}
