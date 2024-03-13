// problem: ボールの移動 (Moving Balls)
// id: 24089
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int *lc = (int *)malloc(sizeof(int) * n + 1);
    for (int i = 1; i <= n; i++)
        lc[i] = i;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        lc[x] = y;
    }
    for (int i = 1; i <= n; i++)
        cout << lc[i] << '\n';

    return 0;
}