// problem: 만취한 상범
// id: 6359
// time taken:
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
        int n, cnt = 0;
        cin >> n;
        bool *chk = (bool *)malloc(sizeof(bool) * n + 1);
        fill(chk, chk + n + 1, true);
        for (int i = 2; i <= n; i++)
        {
            int t = i;
            while (t <= n)
            {
                chk[t] = !chk[t];
                t += i;
            }
        }
        for (int i = 1; i <= n; i++)
            cnt += chk[i];
        cout << cnt << '\n';
    }

    return 0;
}