// problem: Party Invitation
// id: 10104
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, m, r;
    cin >> k >> m;
    int *f = (int *)malloc(sizeof(int) * k + 1);
    fill(f, f + k + 1, 1);
    for (int i = 0; i < m; i++)
    {
        cin >> r;
        int c = 1;
        for (int j = 1; j <= k; j++)
        {
            if (f[j] == 0)
                continue;
            if (c == r)
            {
                c = 1;
                f[j] = 0;
            }
            else
                c++;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        if (f[i])
            cout << i << '\n';
    }

    return 0;
}