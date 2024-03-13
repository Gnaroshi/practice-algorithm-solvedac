// problem: Lonesome Partners
// id: 6013
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, la, lb;
    int mx = -1;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < n; i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        for (int j = i + 1; j < n; j++)
        {
            int t = (x - v[j].first) * (x - v[j].first) + (y - v[j].second) * (y - v[j].second);
            if (t > mx)
            {
                mx = t;
                la = i;
                lb = j;
            }
        }
    }
    cout << min(la, lb) + 1 << ' ' << max(la, lb) + 1;

    return 0;
}