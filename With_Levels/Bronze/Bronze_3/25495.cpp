// problem: 에어팟
// id: 25495
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, bef = -1;
    int ans = 0, con = 2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (i != 0)
        {
            if (bef == t)
            {
                con *= 2;
                ans += con;
            }
            else
            {
                con = 2;
                ans += con;
            }
        }
        else
            ans += con;
        bef = t;
        if (ans >= 100)
        {
            con = 2;
            ans = 0;
            bef = -1;
        }
    }
    cout << ans;

    return 0;
}