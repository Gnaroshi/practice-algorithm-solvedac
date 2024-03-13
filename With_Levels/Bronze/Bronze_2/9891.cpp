// problem: Rect
// id: 9891
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x1, y1, x2, y2, tx, ty;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        tx = abs(x1 - x2);
        ty = abs(y1 - y2);
        v.push_back({min(tx, ty), max(tx, ty)});
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int cx = v[i].first;
        int cy = v[i].second;
        for (int j = i + 1; j < n; j++)
        {
            if ((cx > v[j].first && cy < v[j].second) || (cx < v[j].first && cy > v[j].second))
                ans++;
        }
    }

    cout << ans;

    return 0;
}