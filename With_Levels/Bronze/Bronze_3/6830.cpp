// problem: It’s Cold Here!
// id: 6830
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st, ans;
    int t, mn = 0x3f3f3f3f;

    while (cin >> st >> t)
    {
        if (t < mn)
        {
            mn = t;
            ans = st;
        }
    }
    cout << ans;

    return 0;
}