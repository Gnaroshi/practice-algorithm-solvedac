// problem: 히스토그램
// id: 1725
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll arr[100005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll mx = 0, t, w;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        while (!s.empty() && s.top().second > arr[i])
        {
            auto cur = s.top();
            s.pop();
            if (!s.empty())
                w = s.top().first + 1;
            else
                w = 1;
            mx = max((i + 1 - w) * cur.second, mx);
        }
        if (s.empty() || s.top().second <= arr[i])
            s.push({i + 1, arr[i]});
    }
    while (!s.empty())
    {
        auto cur = s.top();
        s.pop();
        if (!s.empty())
            w = s.top().first + 1;
        else
            w = 1;
        mx = max((n + 1 - w) * cur.second, mx);
    }
    cout << mx << '\n';

    return 0;
}