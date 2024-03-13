// problem: 배수들의 합
// id: 17173
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    int *k = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        cin >> k[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % k[j] == 0)
            {
                ans += i;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}