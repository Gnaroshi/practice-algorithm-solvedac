// problem: ICPC Score Totalizer Software
// id: 4974
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int s = 0, mx = -1, mn = 1001, t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            s += t;
            mx = max(t, mx);
            mn = min(t, mn);
        }
        cout << (s - mx - mn) / (n - 2) << '\n';
    }
    return 0;
}