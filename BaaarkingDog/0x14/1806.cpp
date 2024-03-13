#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll n, s;
ll a[100005];
int mn_len = INT_MAX;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= s)
        {
            cout << 1 << '\n';
            return 0;
        }
    }

    int st, en;
    st = 0;
    en = 1;
    ll temp_sum = a[st] + a[en];
    while (en < n)
    {
        if (st == en)
            en++;
        if (temp_sum < s)
        {
            en++;
            temp_sum += a[en];
        }
        else
        {
            mn_len = min(mn_len, en - st);
            temp_sum -= a[st];
            st++;
        }
    }
    if (mn_len == INT_MAX)
    {
        cout << 0 << '\n';
        return 0;
    }
    cout << mn_len + 1 << '\n';

    return 0;
}