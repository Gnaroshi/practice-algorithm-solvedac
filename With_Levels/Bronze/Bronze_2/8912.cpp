// problem: Sales
// id: 8912
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
        int n, cnt = 0, cur;
        cin >> n;
        int *a = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            cur = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= cur)
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}