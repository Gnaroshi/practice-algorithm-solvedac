// problem: B. Preparing for the Contest
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a, b, ans;
        for (int i = n - k; i >= 1; i--)
            a.push_back(i);
        for (int i = n - k + 1; i <= n; i++)
            b.push_back(i);
        bool chk = true;
        int sa = n - k, sb = k, ca = 0, cb = 0;
        while (true)
        {
            if (ca == sa && cb == sb)
                break;
            if (chk && ca != sa)
                ans.push_back(a[ca++]);
            else if (!chk && cb != sb)
                ans.push_back(b[cb++]);
            chk = !chk;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << ((i != n - 1) ? ' ' : '\n');
    }

    return 0;
}