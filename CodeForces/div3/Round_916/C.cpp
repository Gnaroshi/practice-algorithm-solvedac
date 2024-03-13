// problem: C. Quests
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
        int n, k, mx = 0, t, mxb = 0;
        cin >> n >> k;
        int *a = new int[n], *b = new int[n];
        cin >> a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> t;
            a[i] = a[i - 1] + t;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mxb = max(mxb, t);
            b[i] = mxb;
        }
        if (n <= k)
        {
            for (int i = 0; i < n; i++)
                mx = max(a[i] + b[i] * (k - i - 1), mx);
        }
        else
        {
            for (int i = 0; i < k; i++)
                mx = max(a[i] + b[i] * (k - i - 1), mx);
        }
        cout << mx << '\n';
    }

    return 0;
}