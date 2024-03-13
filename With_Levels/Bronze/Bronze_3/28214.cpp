// problem: 크림빵
// id: 28214
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, p, ans = 0, t;
    cin >> n >> k >> p;
    for (int i = 0; i < n; i++)
    {
        int cc = 0;
        for (int j = 0; j < k; j++)
        {
            cin >> t;
            if (!t)
                cc++;
        }
        if (cc < p)
            ans++;
    }
    cout << ans;

    return 0;
}