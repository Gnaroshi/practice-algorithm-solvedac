#include <bits/stdc++.h>
using namespace std;

#define MX 1005

int d[MX][MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= 1000; i++)
    {
        d[i][0] = 1;
        d[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            d[i][j] = (d[i - 1][j] + d[i - 1][j - 1]) % 10007;
        }
    }
    cout << d[n][m];

    return 0;
}