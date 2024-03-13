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

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            e.push_back(w[i]);
        }
        else
        {
            o.push_back(w[i]);
        }
    }

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