#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;

bool compare(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else

        return a.second < b.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    vector<pair<ll, ll>> mts(n);
    for (int i = 0; i < n; i++)
    {
        ll s, e;
        cin >> s >> e;
        mts[i] = {s, e};
    }

    sort(mts.begin(), mts.end(), compare);
    // for (auto i : mts)
    // {
    //     cout << i.first << " " << i.second << '\n';
    // }

    int ans = 1;
    int s, e;
    s = mts[0].first;
    e = mts[0].second;

    for (ll i = 1; i < n; i++)
    {
        auto cur = mts[i];
        if (e <= cur.first)
        {
            ans++;
            s = cur.first;
            e = cur.second;
            // cout << "ans: " << cur.first << " " << cur.second << '\n';
        }
    }

    cout << ans << '\n';

    return 0;
}