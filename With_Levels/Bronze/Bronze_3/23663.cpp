// problem: Deja vu of Go Players
// id: 23663
// time taken: 15m 42s
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int *a = (int *)malloc(sizeof(int) * n);
        int *b = (int *)malloc(sizeof(int) * m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        // sort(a, a + n, greater<int>());
        // sort(b, b + m, greater<int>());

        // int iter = min(n, m);
        // for (int i = 0; i < iter; i++)
        // {
        //     if (n <= 0 || m <= 0)
        //         break;
        //     n -= a[i];
        //     m -= b[i];
        // }
        if (n <= m)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}