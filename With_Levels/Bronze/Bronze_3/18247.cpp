// problem: 겨울왕국 티켓 예매
// id: 18247
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
        int n, m;
        cin >> n >> m;
        if (n < 12 || m < 4)
            cout << -1 << '\n';
        else
            cout << 11 * m + 4 << '\n';
    }

    return 0;
}
