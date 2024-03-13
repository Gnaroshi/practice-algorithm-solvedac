// problem: 点数 (Score)
// id: 27330
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int ans = 0;
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * m);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(b, b + m);
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
        for (int j = 0; j < m; j++)
        {
            if (ans == b[j])
            {
                ans = 0;
            }
            if (ans < b[j])
                break;
        }
    }
    cout << ans;

    return 0;
}