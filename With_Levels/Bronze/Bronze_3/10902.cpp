// problem: Penalty calculation
// id: 10902
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mx = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int t, s;
        cin >> t >> s;
        if (s > mx)
        {
            mx = s;
            ans = t + (i - 1) * 20;
        }
    }
    cout << ans;

    return 0;
}