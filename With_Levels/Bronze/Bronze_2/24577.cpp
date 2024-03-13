// problem: Espresso!
// id: 24577
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, ans = 0, cur, x;
    cin >> n >> s;
    cur = s;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        x = t[0] - '0';
        x += t.length() - 1;
        if (cur < x)
        {
            cur = s;
            ans++;
        }
        cur -= x;
    }
    cout << ans;

    return 0;
}