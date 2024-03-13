// problem: Store Credit (Small)
// id: 12603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int c, l;
        cin >> c >> l;
        int *p = (int *)malloc(sizeof(int) * l);
        for (int j = 0; j < l; j++)
            cin >> p[j];
        int a, b, t, dif = 0x3f3f3f3f;
        for (int j = 0; j < l - 1; j++)
        {
            for (int k = j + 1; k < l; k++)
            {
                t = p[j] + p[k];
                if (t <= c && c - (t) < dif)
                {
                    a = j;
                    b = k;
                    dif = c - (t);
                }
            }
        }
        cout << a + 1 << ' ' << b + 1 << '\n';
    }

    return 0;
}