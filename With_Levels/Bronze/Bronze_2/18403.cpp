// problem: KABISA
// id: 18403
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, t;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        for (auto &i : s)
        {
            if (i == ',')
                i = ' ';
        }
        stringstream st;
        st.str(s);
        vector<int> ans;
        while (st >> t)
        {
            if (t % 4 == 0 && (t % 100 || t % 400 == 0))
                ans.push_back(t);
        }
        int iter = ans.size();
        for (int i = 0; i < iter; i++)
        {
            cout << ans[i] << ((i != iter - 1) ? ' ' : '\n');
        }
    }

    return 0;
}