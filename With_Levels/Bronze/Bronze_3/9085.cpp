// problem: 더하기
// id: 9085
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
        int n, t, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ans += t;
        }
        cout << ans << '\n';
    }

    return 0;
}