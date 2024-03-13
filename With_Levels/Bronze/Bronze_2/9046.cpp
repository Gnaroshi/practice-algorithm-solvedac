// problem: 복호화
// id: 9046
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int cnt[26] = {0}, mx = -1;
        for (auto i : s)
            if (isalpha(i))
                cnt[i - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (mx < cnt[i])
                mx = cnt[i];
        }
        int mxc = 0, l;
        for (int i = 0; i < 26; i++)
        {
            if (mx == cnt[i])
                mxc++, l = i;
        }
        cout << ((mxc > 1) ? '?' : char('a' + l)) << '\n';
    }

    return 0;
}