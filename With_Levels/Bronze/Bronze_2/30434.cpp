// problem: Converting Romans
// id: 30434
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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        vector<int> v;
        for (auto i : s)
        {
            if (i == 'M')
                v.push_back(1000);
            else if (i == 'D')
                v.push_back(500);
            else if (i == 'C')
                v.push_back(100);
            else if (i == 'L')
                v.push_back(50);
            else if (i == 'X')
                v.push_back(10);
            else if (i == 'V')
                v.push_back(5);
            else
                v.push_back(1);
        }
        int cur = 0, ans = v[0], iter = s.length();
        int curD = v[0];
        for (int i = 1; i < iter; i++)
        {
            if (curD > v[i])
            {
                ans -= v[i];
            }
            else
            {
                cur = i;
                curD = v[i];
                ans += curD;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}