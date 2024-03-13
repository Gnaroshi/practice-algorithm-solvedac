// problem: 전구
// id: 21918
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool bb[4005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> bb[i];
    while (m--)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            bb[b] = c;
        }
        else if (a == 2)
        {
            for (int i = b; i <= c; i++)
                bb[i] = !bb[i];
        }
        else if (a == 3)
        {
            for (int i = b; i <= c; i++)
                bb[i] = 0;
        }
        else
        {
            for (int i = b; i <= c; i++)
                bb[i] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << bb[i] << ' ';

    return 0;
}