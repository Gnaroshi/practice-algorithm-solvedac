// problem: Imiona mrówek
// id: 8537
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        bool cnt[26] = {0};
        int t = 0;
        for (auto i : s)
            cnt[i - 'a'] = 1;
        for (int i = 0; i < 26; i++)
            t += cnt[i];
        ans = max(ans, t);
    }
    cout << ans;

    return 0;
}