// problem: Finding Maximal Non-Trivial Monotones
// id: 26201
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    string s;
    cin >> n >> s;
    char c = s[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (c == s[i])
            cnt++;
        else
        {
            if (c == 'a' && cnt > 1)
                ans += cnt;
            cnt = 1;
        }
        c = s[i];
    }
    if (c == 'a' && cnt > 1)
        ans += cnt;
    cout << ans;

    return 0;
}