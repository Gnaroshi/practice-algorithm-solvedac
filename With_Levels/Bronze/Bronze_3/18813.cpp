// problem: Divisionals Spelling
// id: 18813
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int ans = 0;
    while (n--)
    {
        int al[26] = {0};
        string s;
        cin >> s;
        int iter = s.length();
        bool chk = true;
        for (int i = 0; i < iter; i++)
        {
            al[s[i] - 'A']++;
            if (s[i] > char(m + 'A' - 1) || al[s[i] - 'A'] > 1)
            {
                chk = false;
                break;
            }
        }
        if (chk)
            ans++;
    }
    cout << ans;

    return 0;
}