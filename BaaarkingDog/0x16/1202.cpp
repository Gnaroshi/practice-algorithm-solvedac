#include <bits/stdc++.h>
using namespace std;

#define MX 1000005
using ll = long long;
ll ans = 0;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int n, k;
vector<pair<int, int>> v;
multiset<int> ms;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int mi, vi;
        cin >> mi >> vi;
        v.push_back({mi, vi});
    }

    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        ms.insert(temp);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = n - 1; i >= 0; i--)
    {
        int mss, vl;
        mss = v[i].first;
        vl = v[i].second;

        auto iter = ms.lower_bound(mss);
        if (iter != ms.end())
        {
            ans += vl;
            ms.erase(iter);
        }
    }
    cout << ans << '\n';

    return 0;
}