// problem: Crop Circles
// id: 5959
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *cnt = new int[n];
    fill(cnt, cnt + n, 0);
    vector<double> x, y, r;
    double tx, ty, tr;
    for (int i = 0; i < n; i++)
    {
        cin >> tx >> ty >> tr;
        x.push_back(tx);
        y.push_back(ty);
        r.push_back(tr);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])) < r[i] + r[j])
            {
                cnt[i]++;
                cnt[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << cnt[i] << '\n';

    return 0;
}