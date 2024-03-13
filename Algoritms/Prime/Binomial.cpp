// get binomial n, k mod by p

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1500;
int cashe[MAXN][MAXN];

int binomial(int n, int k, int p)
{
    if (cashe[n][k] != -1)
        return cashe[n][k];
    if (k == 0 || k == n)
        return cashe[n][k] = 1;
    return cashe[n][k] = (binomial(n - 1, k - 1, p) + binomial(n - 1, k, p)) % p;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(cashe, -1, sizeof(cashe));

    int n, k, p;
    cin >> n >> k >> p;
    cout << binomial(n, k, p) << '\n';

    return 0;
}