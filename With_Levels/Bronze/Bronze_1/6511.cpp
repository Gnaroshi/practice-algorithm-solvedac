// problem: Black and white painting
// id: 6511
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c;
    while (true)
    {
        cin >> n >> m >> c;
        if (n + m + c == 0)
            break;
        cout << ((n - 7) * (m - 7) + c) / 2 << '\n';
    }

    return 0;
}