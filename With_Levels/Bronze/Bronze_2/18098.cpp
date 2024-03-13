// problem: Совпадения
// id: 18098
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, cnt = 0;
    cin >> n;
    bool *chk = (bool *)malloc(sizeof(bool) * n + 1);
    fill(chk, chk + n + 1, false);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t <= n)
            chk[t] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (chk[i])
            cnt++;
    }
    cout << cnt;

    return 0;
}