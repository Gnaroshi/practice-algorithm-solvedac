// problem: Ornaments
// id: 26550
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
        int n;
        long long ans = 0;
        long long t = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            t += i;
            ans += t;
        }
        cout << ans << '\n';
    }

    return 0;
}