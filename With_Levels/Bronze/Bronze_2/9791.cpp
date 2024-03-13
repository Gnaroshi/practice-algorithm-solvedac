// problem: Encoding Binary Numbers
// id: 9791
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "0")
            break;
        string ans = "";
        int cnt = 1, iter = s.length();
        int cur = s[0];
        for (int i = 1; i < iter; i++)
        {
            if (s[i] != cur)
            {
                ans.append(to_string(cnt));
                ans.push_back(cur);
                cur = s[i];
                cnt = 1;
            }
            else
            {
                cnt++;
            }
            if (i == iter - 1)
            {
                ans.append(to_string(cnt));
                ans.push_back(cur);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}