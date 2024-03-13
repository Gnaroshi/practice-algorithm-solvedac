// problem: SciComLove (2023)
// id: 27913
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, x;
    cin >> n >> q;
    bool *chk = (bool *)malloc(sizeof(bool) * n);
    fill(chk, chk + n, false);
    for (int i = 0; i < n; i += 10)
    {
        if (i < n)
            chk[i] = true;
        if (i + 3 < n)
            chk[i + 3] = true;
        if (i + 6 < n)
            chk[i + 6] = true;
    }
    int cnt = 0;
    for (int j = 0; j < n; j++)
        cnt += chk[j];
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        chk[x - 1] = !chk[x - 1];
        if (chk[x - 1])
            cnt++;
        else
            cnt--;
        cout << cnt << '\n';
    }

    return 0;
}