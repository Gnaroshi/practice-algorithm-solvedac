// problem: Beehives
// id: 24767
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d;
    int n;
    while (true)
    {
        cin >> d >> n;
        if (n == 0)
            break;
        vector<pair<double, double>> v(n);
        int cnt = 0;
        bool *chk = (bool *)malloc(sizeof(bool) * n);
        fill(chk, chk + n, 1);
        for (auto &i : v)
            cin >> i.first >> i.second;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (chk[i] || chk[j])
                {
                    if (sqrt((v[i].first - v[j].first) * (v[i].first - v[j].first) +
                             (v[i].second - v[j].second) * (v[i].second - v[j].second)) <= d)
                    {
                        chk[i] = chk[j] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
            cnt += chk[i];
        cout << n - cnt << " sour, " << cnt << " sweet\n";
    }

    return 0;
}