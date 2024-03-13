// problem: Egg Drop
// id: 26513
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    while (true)
    {
        cin >> n >> k;
        if (n + k == 0)
            break;
        int mn = 1, mx = k, d;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> s;
            if (s[0] == 'S')
                mn = max(mn, d);
            else
                mx = min(mx, d);
        }
        cout << mn + 1 << ' ' << mx - 1 << '\n';
    }

    return 0;
}