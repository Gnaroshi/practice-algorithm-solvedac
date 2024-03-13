// problem: Arabic and English
// id: 9557
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
        vector<string> eg, ar;
        string s;
        bool chk = true;
        int n;
        cin >> n;
        while (n--)
        {
            cin >> s;
            if (s[0] == '#' && chk)
                ar.emplace_back(s);
            else
            {
                chk = false;
                eg.emplace_back(s);
            }
        }
        if (!eg.empty())
        {
            int es = eg.size();
            for (int i = 1; i < es; i++)
                cout << eg[i] << " ";
            cout << eg.front() << ' ';
        }
        for (auto i : ar)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
