#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> e;
vector<int> o;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long ans = 0;
    int n;
    cin >> n;
    int *w = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w, w + n, greater<int>());

    int iter = n / 2;
    if (n % 2 == 1)
        iter++;

    for (int i = 0; i < iter; i++)
        e.push_back(w[i]);
    for (int i = iter; i < n; i++)
        o.push_back(w[i]);

    reverse(o.begin(), o.end());

    int e_loc = 0;
    int o_loc = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            v.push_back(e[e_loc]);
            e_loc++;
        }
        else
        {
            v.push_back(o[o_loc]);
            o_loc++;
        }
    }

    // cout << "v: ";
    // for (auto i : v)
    // {
    //     cout << i << ' ';
    // }
    // cout << '\n';

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans += w[0];
            continue;
        }
        ans += max(0, v[i] - v[i - 1]);
    }

    cout << ans << '\n';

    return 0;
}