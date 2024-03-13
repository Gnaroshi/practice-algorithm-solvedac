// problem: Lamp
// id: 9897
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, g, r, a, d, ans = 0;
    string s;
    cin >> l >> g >> r;
    bool *lb = (bool *)malloc(sizeof(bool) * l + 1);
    fill(lb, lb + l + 1, 0);
    vector<string> gn;
    vector<pair<int, int>> gad;
    for (int i = 0; i < g; i++)
    {
        cin >> s >> a >> d;
        gn.emplace_back(s);
        gad.push_back({a, d});
    }
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        int lc = 0;
        for (auto j : gn)
        {
            if (j == s)
                break;
            lc++;
        }
        for (int j = gad[lc].first; j <= l; j += gad[lc].second)
            lb[j] = !lb[j];
    }
    for (int i = 1; i <= l; i++)
        ans += lb[i];
    cout << ans;

    return 0;
}