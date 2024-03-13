// Lucas Theorem
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 2010;
int binomial[MAXN][MAXN];

ll n, k, m, ret;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k >> m;
    for (int i = 0; i < m; i++)
    {
        binomial[i][0] = 1;
        for (int j = 1; j <= i; j++)
            binomial[i][j] = (binomial[i - 1][j - 1] + binomial[i - 1][j]) % m;
    }

    ret = 1;
    while (n || k)
    {
        ret *= binomial[n % m][k % m];
        n /= m, k /= m;
        ret %= m;
    }
    cout << ret << '\n';

    return 0;
}