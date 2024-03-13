// problem: Клавиатура
// id: 21679
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n;
    int *c = (int *)malloc(sizeof(int) * n + 1);
    fill(c, c + n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        c[t]--;
    }
    for (int i = 1; i <= n; i++)
    {
        if (c[i] < 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}