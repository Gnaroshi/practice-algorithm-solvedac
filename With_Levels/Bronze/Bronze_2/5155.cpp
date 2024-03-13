// problem: Gadget Purchases
// id: 5155
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int ct = 1; ct <= tc; ct++)
    {
        int n, m, t;
        cin >> n >> m;
        int *p = (int *)malloc(sizeof(int) * m + 1);
        int *c = (int *)malloc(sizeof(int) * m + 1);
        int *u = (int *)malloc(sizeof(int) * m + 1);
        int *r = (int *)malloc(sizeof(int) * m + 1);
        int *pc = (int *)malloc(sizeof(int) * m + 1);
        fill(pc, pc + m + 1, 0);
        for (int i = 1; i <= m; i++)
            cin >> p[i] >> c[i] >> u[i] >> r[i];

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            pc[t]++;
        }
        cout << "Data Set " << ct << ":\n";
        for (int i = 1; i <= m; i++)
        {
            int us = min(pc[i], u[i]);
            if (r[i] * us > p[i] + us * c[i])
                cout << i << '\n';
        }
        if (ct != tc)
            cout << '\n';
    }

    return 0;
}