#include <bits/stdc++.h>
using namespace std;

#define MOD_FACTOR 1000000007
#define ll long long

int n;
ll p = 0, q = 0;

vector<int> v;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    ll factor = 1;
    for (int i = 0; i < n; i++)
    {
        p += (factor - 1) * v[i];
        q += (factor - 1) * v[n - 1 - i];
        p %= MOD_FACTOR;
        q %= MOD_FACTOR;
        factor *= 2;
    }

    ll ans = (MOD_FACTOR + p % MOD_FACTOR - q % MOD_FACTOR) % MOD_FACTOR;
    cout << ans << '\n';

    return 0;
}