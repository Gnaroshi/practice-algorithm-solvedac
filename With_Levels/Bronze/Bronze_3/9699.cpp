// problem: RICE SACK
// id: 9699
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int mx = -1, t;
        for (int j = 0; j < 5; j++)
        {
            cin >> t;
            mx = max(mx, t);
        }
        cout << "Case #" << i << ": " << mx << '\n';
    }

    return 0;
}