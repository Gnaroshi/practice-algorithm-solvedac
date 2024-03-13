// problem: 이항 계수 4
// id: 11402
// time taken:
// tag: Lucas Theorem
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int bn[2001][2001];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, m, ans = 1, d;
    cin >> n >> k >> m;
    for (int i = 0; i < m; i++)
    {
        bn[i][0] = 1;
        bn[i][i] = 1;
        for (int j = 1; j < i; j++)
            bn[i][j] = (bn[i - 1][j - 1] + bn[i - 1][j]) % m;
    }

    vector<ll> a, b;
    while (n > 0)
    {
        a.push_back(n % m);
        n /= m;
    }
    while (k > 0)
    {
        b.push_back(k % m);
        k /= m;
    }
    d = a.size() - b.size();
    for (int i = 0; i < d; i++)
        b.push_back(0);
    d = a.size();
    for (int i = 0; i < d; i++)
    {
        if (a[i] < b[i])
        {
            ans = 0;
            break;
        }
        ans *= bn[a[i]][b[i]];
        ans %= m;
    }
    cout << ans;

    return 0;
}