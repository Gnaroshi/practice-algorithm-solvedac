// problem: Word Searching
// id: 9771
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    int ans = 0;
    cin >> s;
    int slen = s.length();
    while (cin >> t)
    {
        int tlen = t.length();
        int chk = 0;
        int sloc = 0;
        for (int i = 0; i < tlen; i++)
        {
            if (t[i] == s[sloc])
            {
                chk++;
                sloc++;
            }
            else
            {
                chk = 0;
                sloc = 0;
            }
            if (chk == slen)
            {
                ans++;
                chk = 0;
                sloc = 0;
            }
        }
    }
    cout << ans;

    return 0;
}