// problem: 첼시를 도와줘!
// id: 11098
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
        int n, mx = -1, t;
        string s, ans;
        cin >> n;
        while (n--)
        {
            cin >> t >> s;
            if (mx < t)
            {
                mx = t;
                ans = s;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}