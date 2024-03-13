#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m;
ll s[100005];
ll d[100005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    cin >> s[1];
    d[1] = s[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> s[i];
        d[i] = d[i - 1] + s[i];
    }

    while (m--)
    {
        int i, j;
        cin >> i >> j;
        cout << d[j] - d[i - 1] << '\n';
    }

    return 0;
}