// problem: Stovėjimo aikštelė
// id: 30068
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;
    vector<pair<int, int>> ans;
    vector<pair<int, int>> rec;
    for (int i = 0; i < m; i++)
    {
        int t, n, iter = rec.size();
        cin >> t >> n;
        bool chk = true;
        for (int i = 0; i < iter; i++)
        {
            if (rec[i].first == n)
            {
                chk = false;
                ans.push_back({n, t - rec[i].second});
                rec.erase(rec.begin() + i);
                break;
            }
        }
        if (chk)
            rec.push_back({n, t});
    }
    for (auto i : ans)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}