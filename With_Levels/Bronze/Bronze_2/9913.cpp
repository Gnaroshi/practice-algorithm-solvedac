// problem: Max
// id: 9913
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[10001] = {0};
    int tc, t;
    cin >> tc;
    while (tc--)
    {
        cin >> t;
        cnt[t]++;
    }
    int mx = -1;
    for (int i = 0; i < 10001; i++)
        mx = max(mx, cnt[i]);
    cout << mx;

    return 0;
}