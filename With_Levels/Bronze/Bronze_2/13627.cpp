// problem: Dangerous Dive
// id: 13627
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, n, t;
    cin >> r >> n;
    bool *chk = (bool *)malloc(sizeof(bool) * r + 1);
    fill(chk, chk + r + 1, 1);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        chk[t] = 0;
    }
    if (r == n)
        cout << '*';
    else
    {
        for (int i = 1; i <= r; i++)
            if (chk[i])
                cout << i << ' ';
    }

    return 0;
}