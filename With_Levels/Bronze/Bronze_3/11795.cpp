// problem: Donation Packaging
// id: 11795
// time taken:
#include <bits/stdc++.h>
using namespace std;
int tc, a, b, c, t;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> tc;
    while (tc--)
    {
        cin >> t;
        a += t;
        cin >> t;
        b += t;
        cin >> t;
        c += t;
        if (a >= 30 && b >= 30 && c >= 30)
        {
            int mx = min(min(a, b), c);
            a -= mx;
            b -= mx;
            c -= mx;
            cout << mx << '\n';
        }
        else
            cout << "NO\n";
    }

    return 0;
}