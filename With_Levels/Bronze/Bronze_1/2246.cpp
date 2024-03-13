// problem: 콘도 선정
// id: 2246
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, d, c;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> c;
        v.push_back({d, c});
    }

    for (int i = 0; i < n; i++)
    {
        d = v[i].first, c = v[i].second;
        bool chk = true;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (d >= v[j].first)
            {
                if (c >= v[j].second)
                {
                    chk = false;
                    break;
                }
            }
        }
        ans += chk;
    }

    cout << ans << '\n';

    return 0;
}