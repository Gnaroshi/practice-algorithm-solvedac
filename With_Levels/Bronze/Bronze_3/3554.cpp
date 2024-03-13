// problem: Enigmatic Device
// id: 3554
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int k, l, r;
        cin >> k >> l >> r;
        if (k == 1)
        {
            for (int j = l; j <= r; j++)
                a[j] = (a[j] * a[j]) % 2010;
        }
        else if (k == 2)
        {
            int t = 0;
            for (int j = l; j <= r; j++)
                t += a[j];
            cout << t << '\n';
        }
    }

    return 0;
}