// problem: Display
// id: 9038
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, ans = 1, cur = 0, iter, l;
        string s, t;
        stringstream st;
        vector<string> v;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        st.str(s);
        while (st >> t)
            v.emplace_back(t);
        iter = v.size();
        for (int i = 0; i < iter; i++)
        {
            l = v[i].length();
            bool chk = (i != iter - 1);
            if (cur + l > n)
            {
                cur = l + chk;
                ans++;
            }
            else
                cur += l + chk;
        }
        cout << ans << '\n';
    }

    return 0;
}