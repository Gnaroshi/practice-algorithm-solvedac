// problem: Country Leader (Large)
// id: 14323
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, mx = -1;
        cin >> n;
        cin.ignore();
        string ans = "", s;
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            bool chk[26] = {0};
            int cnt = 0;
            for (auto c : s)
            {
                if (isalpha(c))
                    chk[c - 'A'] = 1;
            }
            for (int j = 0; j < 26; j++)
                cnt += chk[j];

            if (mx < cnt)
            {
                ans = s;
                mx = cnt;
            }
            else if (mx == cnt)
            {
                if (ans > s)
                    ans = s;
            }
        }

        cout << "Case #" << tcc << ": " << ans << '\n';
    }

    return 0;
}