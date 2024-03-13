// problem: Alpha Puzzle
// id: 13776
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, ans = "";
    vector<string> v;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, s);
        v.push_back(s);
    }
    bool chk[26] = {0};
    for (auto i : v)
    {
        for (auto j : i)
        {
            if (!isalpha(j))
                continue;
            if (!chk[j - 'A'])
                ans += j;
            chk[j - 'A'] = 1;
        }
    }
    cout << ans;

    return 0;
}