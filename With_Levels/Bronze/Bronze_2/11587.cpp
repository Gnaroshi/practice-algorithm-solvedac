// problem: MARKO
// id: 11587
// time taken:
#include <bits/stdc++.h>
using namespace std;

string tn[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    string s;
    cin >> s;
    int iter = s.length();
    for (auto i : v)
    {
        if (i.length() != iter)
            continue;
        bool chk = true;
        for (int j = 0; j < iter; j++)
        {
            int t;
            for (int k = 0; k < 8; k++)
            {
                if (find(tn[k].begin(), tn[k].end(), i[j]) != tn[k].end())
                {
                    t = k;
                    break;
                }
            }
            if (t != (s[j] - '0' - 2))
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