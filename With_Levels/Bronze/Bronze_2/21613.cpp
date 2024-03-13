// problem: Silent Auction
// id: 21613
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, mx = -1, t;
    string s, ans = "";
    cin >> tc;
    while (tc--)
    {
        cin >> s >> t;
        if (t > mx)
        {
            mx = t;
            ans = s;
        }
    }
    cout << ans;

    return 0;
}