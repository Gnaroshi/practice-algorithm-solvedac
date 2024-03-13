// problem: Look and Say
// id: 4841
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
        int iter = s.length(), cnt = 1;
        char bef = s[0];
        for (int i = 1; i < iter; i++)
        {
            if (s[i] == bef)
                cnt++;
            else
            {
                ans += to_string(cnt);
                ans += bef;
                cnt = 1;
            }
            bef = s[i];
        }
        ans += to_string(cnt);
        ans += bef;
        cout << ans << '\n';
    }

    return 0;
}