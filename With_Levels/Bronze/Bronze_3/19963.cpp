// problem: Санта Клаус
// id: 19963
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, t;
    cin >> n >> a >> b;
    int *c = (int *)malloc(sizeof(int) * n + 1);
    fill(c, c + n + 1, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> t;
        c[t]++;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> t;
        c[t]++;
    }
    cout << n - a - b << '\n';
    for (int i = 1; i <= n; i++)
    {
        if (!c[i])
            cout << i << ' ';
    }

    return 0;
}
