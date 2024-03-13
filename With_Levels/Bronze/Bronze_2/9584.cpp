// problem: Fraud Busters
// id: 9584
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, a;
    vector<string> ans;
    cin >> s;
    int tc, cnt = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> a;
        bool chk = true;
        for (int i = 0; i < 9; i++)
        {
            if (s[i] == '*')
                continue;
            if (s[i] != a[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            ans.emplace_back(a);
            cnt++;
        }
    }
    cout << cnt << '\n';
    if (cnt)
    {
        for (auto i : ans)
            cout << i << '\n';
    }

    return 0;
}