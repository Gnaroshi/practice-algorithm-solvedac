// problem: Šampūnas
// id: 7217
// time taken:
#include <bits/stdc++.h>
using namespace std;
bool d[100005];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, ans = 1;
    cin >> n >> k;
    bool w = true;
    while (k--)
    {
        cin >> t;
        d[t] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (!w || d[i])
        {
            w = true;
            ans++;
        }
        else
            w = false;
    }
    cout << ans;

    return 0;
}