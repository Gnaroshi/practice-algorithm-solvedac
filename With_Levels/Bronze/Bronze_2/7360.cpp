// problem: Undercut
// id: 7360
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int *a = (int *)malloc(sizeof(int) * n);
        int *b = (int *)malloc(sizeof(int) * n);
        int as = 0, bs = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            int ca = a[i], cb = b[i];
            if (abs(ca - cb) == 1)
            {
                if (ca == 1)
                    as += 6;
                else if (cb == 1)
                    bs += 6;
                else
                {
                    if (ca > cb)
                        bs += ca + cb;
                    else
                        as += ca + cb;
                }
            }
            else if (ca != cb)
            {
                if (ca > cb)
                    as += ca;
                else
                    bs += cb;
            }
        }
        cout << "A has " << as << " points. B has " << bs << " points.\n\n";
    }

    return 0;
}