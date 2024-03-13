// problem: Moist (Small2)
// id: 12086
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, tcc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, ans = 0, cur = 0;
        cin >> n;
        cin.ignore();
        vector<string> v(n), vs(n);
        for (auto &i : v)
            getline(cin, i);
        copy(v.begin(), v.end(), vs.begin());
        sort(vs.begin(), vs.end());
        for (auto i : vs)
        {
            if (i != v[cur])
            {
                ans++;
                v.erase(find(v.begin(), v.end(), i));
            }
            else
                cur++;
        }
        cout << "Case #" << tcc++ << ": " << ans << '\n';
    }

    return 0;
}