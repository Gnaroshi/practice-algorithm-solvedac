// problem: Send me the money
// id: 15786
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ls;
    string s, t;
    cin >> n >> m >> s;
    ls = s.length();
    while (m--)
    {
        cin >> t;
        int idx = 0;
        if (t.length() < ls)
        {
            cout << "false\n";
            continue;
        }
        for (auto i : t)
        {
            if (i == s[idx])
                idx++;
            if (idx == ls)
                break;
        }
        cout << ((idx == ls) ? "true\n" : "false\n");
    }

    return 0;
}