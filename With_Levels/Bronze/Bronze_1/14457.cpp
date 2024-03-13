// problem: Cow Tipping
// id: 14457
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    bool **brd = (bool **)malloc(sizeof(bool *) * n);
    for (int i = 0; i < n; i++)
        brd[i] = (bool *)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            brd[i][j] = (v[i][j] == '1');

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (brd[i][j])
            {
                ans++;
                for (int ii = 0; ii <= i; ii++)
                    for (int jj = 0; jj <= j; jj++)
                        brd[ii][jj] = !brd[ii][jj];
            }
        }
    }
    cout << ans;

    return 0;
}