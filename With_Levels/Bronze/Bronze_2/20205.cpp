// problem: 교수님 그림이 깨지는데요?
// id: 20205
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t;
    cin >> n >> k;
    vector<vector<int>> v(n);
    for (auto &i : v)
        i.resize(n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    for (int i = 0; i < n * k; i++)
    {
        for (int j = 0; j < n * k; j++)
            cout << v[i / k][j / k] << ((j != n * k - 1) ? ' ' : '\n');
    }

    return 0;
}