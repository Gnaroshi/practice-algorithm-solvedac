// problem: Lobby
// id: 13063
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n == 0 && m == 0 && k == 0)
            break;
        if (n % 2 + n / 2 <= k)
            cout << -1;
        else
            cout << max(n / 2 - m + 1, 0);
        cout << '\n';
    }

    return 0;
}