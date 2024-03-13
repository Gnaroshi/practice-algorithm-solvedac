// problem: Tuna
// id: 14409
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, x, a, b;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (abs(a - b) > x)
        {
            cin >> b;
            ans += b;
        }
        else
            ans += max(a, b);
    }
    cout << ans;

    return 0;
}