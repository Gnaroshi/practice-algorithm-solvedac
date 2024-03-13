// problem: Numbers
// id: 5489
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mx = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cnt[t]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (mx < cnt[i])
        {
            mx = cnt[i];
            ans = i;
        }
    }
    cout << ans;

    return 0;
}