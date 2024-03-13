// problem: 리그
// id: 5544
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, d, iter;
    cin >> n;
    vector<int> v(n + 1), sc(n + 1);
    set<int> st;
    vector<pair<int, int>> r, rt;
    int *cnt = new int[1000];
    fill(v.begin(), v.end(), 0);
    fill(cnt, cnt + 1000, 0);
    iter = (n - 1) * n / 2;
    for (int i = 0; i < iter; i++)
    {
        cin >> a >> b >> c >> d;
        if (c > d)
            v[a] += 3;
        else if (c < d)
            v[b] += 3;
        else
            v[a]++, v[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        r.push_back({v[i], i});
        cnt[v[i]]++;
    }

    sort(r.begin(), r.end(), greater<>());
    int dp = 1, bef = r.front().first, cur = 1;
    sc[r.front().second] = 1;
    for (int i = 1; i < n; i++)
    {
        if (r[i].first != bef)
        {
            cur += dp;
            dp = 1;
        }
        else
            dp++;
        sc[r[i].second] = cur;
        bef = r[i].first;
    }
    for (int i = 1; i <= n; i++)
        cout << sc[i] << '\n';

    return 0;
}
