#include <bits/stdc++.h>
using namespace std;

#define u128 __uint128_t
int n, m;
u128 c[101][101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        c[i][0] = 1;
        c[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }
    vector<int> ans;
    u128 temp = c[n][m];
    while (true)
    {
        ans.push_back(temp % 10);
        temp /= 10;
        if (temp == 0)
            break;
    }
    reverse(ans.begin(), ans.end());

    for (auto i : ans)
        cout << i;
    cout << '\n';

    return 0;
}