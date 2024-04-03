H2
#include <bits/stdc++.h>
    using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, t;
    cin >> n >> m >> k;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            v[i].push_back(t);
        }
    }

    vector<int> cnt(n);
    fill(cnt.begin(), cnt.end(), 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cnt[j] + v[j][i] >= k)
            {
                cout << j + 1 << ' ' << i + 1 << '\n';
                return 0;
            }
            cnt[j] += v[j][i];
        }
    }

    return 0;
}
