// problem: Statistics
// id: 20674
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cm = 1001, ans = 0, t;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> t;
        if (t <= cm)
            cm = t;
        else
            ans += (t - cm);
    }
    cout << ans;

    return 0;
}