// problem: IOI 2017 Logo
// id: 14184
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, vector<int>> a, pair<int, vector<int>> b)
{
    if (a.second[0] == b.second[0])
    {
        if (a.second[1] == b.second[1])
        {
            return a.second[2] > b.second[2];
        }
        return a.second[1] > b.second[1];
    }
    return a.second[0] > b.second[0];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, t;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        map<int, vector<int>> m;
        while (n--)
        {
            cin >> d;
            for (int i = 0; i < d; i++)
            {
                cin >> t;
                if (m.find(t) != m.end())
                {
                    m[t][i]++;
                    m[t][3] += 3 - i;
                }
                else
                {
                    vector<int> init(4);
                    fill(init.begin(), init.begin() + 4, 0);
                    init[i] = 1;
                    init[3] = 3 - i;
                    m.insert({t, init});
                }
            }
        }
        int mx = 0, iter;
        vector<pair<int, vector<int>>> winner;
        vector<int> ans;
        for (auto i : m)
            mx = max(mx, i.second[3]);
        for (auto i : m)
        {
            if (i.second[3] == mx)
                winner.push_back({i.first, i.second});
        }
        iter = winner.size();
        sort(winner.begin(), winner.end(), comp);
        auto w = winner.front().second;
        ans.push_back(winner.front().first);

        for (int i = 1; i < iter; i++)
        {
            auto cur = winner[i].second;
            bool chk = true;
            for (int j = 0; j < 3; j++)
            {

                if (cur[j] != w[j])
                {
                    chk = false;
                    break;
                }
            }
            if (chk)
                ans.push_back(winner[i].first);
        }
        iter = ans.size();
        sort(ans.begin(), ans.end());
        for (int i = 0; i < iter; i++)
        {
            cout << ans[i] << (i != iter - 1 ? ' ' : '\n');
        }
    }

    // cout << i << (i != iter - 1 ? ' ' : '\n');
    return 0;
}