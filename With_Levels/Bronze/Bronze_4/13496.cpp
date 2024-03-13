// problem: The Merchant of Venice
// id: 13496
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int n, s, d, ds, v;
        int ans = 0;
        cin >> n >> s >> d;
        for (int j = 0; j < n; j++)
        {
            cin >> ds >> v;
            if (ds <= d * s)
                ans += v;
        }
        cout << "Data Set " << i << ":\n";
        cout << ans << "\n\n";
    }

    return 0;
}