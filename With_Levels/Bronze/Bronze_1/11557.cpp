// problem: Yangjojang of The Year
// id: 11557
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
        string s, ans = "";
        cin >> n;
        while (n--)
        {
            cin >> s >> t;
            if (t > mx)
            {
                ans = s;
                mx = t;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}