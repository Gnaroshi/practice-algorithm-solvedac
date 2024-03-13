// problem: Spreadsheets
// id: 16265
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
        string ans = "";
        int k, t = 1;
        cin >> k;
        while (k > 0)
        {
            ans += char('A' + (k - 1) % 26);
            k = (k - 1) / 26;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }

    return 0;
}