// problem: 데칼코마니
// id: 23841
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != '.')
                v[i][m - j - 1] = v[i][j];
        }
    }
    for (auto i : v)
        cout << i << '\n';
    return 0;
}