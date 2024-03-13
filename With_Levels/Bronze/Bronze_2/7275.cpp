// problem: Skalbiniai
// id: 7275
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m, ans = 0;
    int g, t;

    cin >> n >> k >> m;
    int *gr = (int *)malloc(sizeof(int) * n);
    int *tot = (int *)malloc(sizeof(int) * k);
    fill(tot, tot + k, 0);

    for (int i = 0; i < k; i++)
    {
        cin >> g;
        for (int j = 0; j < g; j++)
        {
            cin >> t;
            gr[t - 1] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        tot[gr[i]] += t;
    }

    for (int i = 0; i < k; i++)
    {
        ans += (tot[i] + m - 1) / m;
    }
    cout << ans;

    return 0;
}