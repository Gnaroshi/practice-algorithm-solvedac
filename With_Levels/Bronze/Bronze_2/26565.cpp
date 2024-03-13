// problem: Time Limits
// id: 26565
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
        int n, k, mx = -1, t;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mx = max(mx, t);
        }
        mx *= k;
        if (mx % 1000)
            cout << mx / 1000 + 1 << '\n';
        else
            cout << mx / 1000 << '\n';
    }

    return 0;
}