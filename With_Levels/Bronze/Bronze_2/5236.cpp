// problem: Longest Decreasing Suffix
// id: 5236
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
        string s, ans = "";
        cin >> s;
        int iter = s.length();
        char bef = 'a' - 1;
        for (int i = iter - 1; i >= 0; i--)
        {
            if (bef >= s[i])
            {
                ans = s.substr(i + 1, iter - i);
                break;
            }
            bef = s[i];
        }
        if (ans == "")
            ans = s;

        cout << "The longest decreasing suffix of " << s << " is " << ans << '\n';
    }

    return 0;
}