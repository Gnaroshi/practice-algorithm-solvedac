// problem: Analysis of Advanced Analytics
// id: 15155
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 1, cur = 0, t;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (cur + t > k)
        {
            ans++;
            cur = t;
        }
        else
        {
            cur += t;
        }
    }
    cout << ans;

    return 0;
}