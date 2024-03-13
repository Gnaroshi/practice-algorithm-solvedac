// problem: Winning ICPC
// id: 15845
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, mx = -1, ans = 0, t;
    cin >> n >> m;
    int *tc = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        cin >> tc[i];
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (t == tc[j])
                cnt++;
        }
        if (mx < cnt)
        {
            mx = cnt;
            ans = i;
        }
    }
    cout << ans + 1;

    return 0;
}