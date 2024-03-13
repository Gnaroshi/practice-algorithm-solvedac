// problem: D번 - 이민희진
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, a, b;
    vector<string> v;
    int ans = 0;
    int ia, ib, it;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        a = v[i];
        ia = a.length();
        for (int j = i + 1; j < n; j++)
        {
            b = v[j];
            if (i == j)
                continue;
            ib = b.length();
            it = min(int(b.length()), ia);
            bool chk = false;
            for (int k = 1; k <= it; k++)
            {
                // cout << "i: " << i << " j: " << j << ' ' << a.substr(ia - k, k) << ' ' << b.substr(0, k) << ' ' << a.substr(0, k) << ' ' << b.substr(ib - k, k) << '\n';
                if (a.substr(ia - k, k) == b.substr(0, k) || a.substr(0, k) == b.substr(ib - k, k))
                {
                    chk = true;
                    break;
                }
            }
            if (chk)
                ans++;
        }
    }
    cout << ans;

    return 0;
}