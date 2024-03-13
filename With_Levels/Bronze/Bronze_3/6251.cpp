// problem: Leaking Dike
// id: 6251
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tar;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int *b = (int *)malloc(sizeof(int) * n);
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> b[i];
        cin >> tar;
        int t = b[tar - 1] + 1;
        for (int i = 0; i < n; i++)
            if (b[i] < t)
                ans += t - b[i];

        cout << ans << '\n';
    }

    return 0;
}