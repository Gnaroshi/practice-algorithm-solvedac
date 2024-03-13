// problem: 카드 공장 (Small)
// id: 17273
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, t, ans = 0;
    cin >> n >> m;
    int *cs = (int *)malloc(sizeof(int) * n);
    fill(cs, cs + n, 1);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.emplace_back(a, b);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        for (int j = 0; j < n; j++)
        {
            if (cs[j])
            {
                if (v[j].first <= t)
                    cs[j] = 0;
            }
            else
            {
                if (v[j].second <= t)
                    cs[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (cs[i])
            ans += v[i].first;
        else
            ans += v[i].second;
    }
    cout << ans;

    return 0;
}