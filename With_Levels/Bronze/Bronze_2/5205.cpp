// problem: School Colors
// id: 5205
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n;
        cin >> n;
        double mx = -1, r, g, b;
        vector<vector<int>> v;
        vector<int> t(3);
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> t[j];
            v.push_back(t);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                double c = 0;
                for (int k = 0; k < 3; k++)
                    c += (v[i][k] - v[j][k]) * (v[i][k] - v[j][k]);
                c = sqrt(c);
                if (mx < c)
                {
                    ans.clear();
                    ans.push_back({i, j});
                    mx = c;
                }
                else if (mx == c)
                    ans.push_back({i, j});
            }
        }
        sort(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i.first + 1 << ' ' << i.second + 1 << '\n';
    }

    return 0;
}