// problem: 最頻値 (Mode)
// id: 18413
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n, m, ans = -1;
    cin >> n >> m;
    int *b = (int *)malloc(sizeof(int) * n);
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mx = max(b[i], mx);
    }
    int *cnt = (int *)malloc(sizeof(int) * mx + 1);
    fill(cnt, cnt + mx + 1, 0);
    for (int i = 0; i < n; i++)
        cnt[b[i]]++;

    for (int i = 0; i <= mx; i++)
        ans = max(ans, cnt[i]);
    cout << ans;

    return 0;
}