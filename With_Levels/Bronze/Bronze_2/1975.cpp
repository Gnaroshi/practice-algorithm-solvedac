// problem: Number Game
// id: 1975
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
        int n, ans = 0;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            int t = n;
            while (t % i == 0)
            {
                t /= i;
                ans++;
            }
            if (t == 0)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}