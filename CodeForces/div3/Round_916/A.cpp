// problem: A. Problemsolving Log
// id:
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
        string s;
        cin >> n >> s;
        int cnt[26] = {0};
        for (auto i : s)
            cnt[i - 'A']++;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] >= i + 1)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}