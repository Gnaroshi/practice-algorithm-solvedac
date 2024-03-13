// problem: 希少な数 (Rare Number)
// id: 24085
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = -1, ans, mxc = 101, t;
    cin >> n;
    int *ns = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> ns[i];
        mx = max(ns[i], mx);
    }

    int *cnt = (int *)malloc(sizeof(int) * mx + 1);
    fill(cnt, cnt + mx + 1, 0);
    for (int i = 0; i < n; i++)
        cnt[ns[i]]++;
    for (int i = 1; i <= mx; i++)
    {
        if (mxc > cnt[i] && cnt[i] != 0)
        {
            mxc = cnt[i];
            ans = i;
        }
    }
    cout << ans;

    return 0;
}