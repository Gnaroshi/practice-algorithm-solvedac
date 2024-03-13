#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;

    vector<int> V(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    sort(V.begin(), V.end());

    ll temp_max = V[n - 1];
    ll temp_min = 0;
    ll temp_mid;
    ll temp_sum;
    ll temp_result;
    while (temp_max >= temp_min)
    {
        temp_sum = 0;
        temp_mid = (temp_max + temp_min) / 2;
        for (ll i = 0; i < n; i++)
        {
            if ((V[i] - temp_mid) > 0)
            {
                temp_sum += V[i] - temp_mid;
            }
        }
        if (temp_sum < m)
        {
            temp_max = temp_mid - 1;
        }
        else
        {
            temp_result = temp_mid;
            temp_min = temp_mid + 1;
        }
    }
    cout << temp_result << '\n';
    return 0;
}