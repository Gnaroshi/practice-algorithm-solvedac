// problem: Cow Phrasebook
// id: 26984
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> v;
    string s;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        v.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        getline(cin, s);
        bool chk = false;
        for (auto j : v)
        {
            if (j.substr(0, s.length()) == s)
            {
                chk = true;
                break;
            }
        }
        ans += chk;
    }
    cout << ans;

    return 0;
}