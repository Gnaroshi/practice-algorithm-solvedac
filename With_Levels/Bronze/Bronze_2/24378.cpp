// problem: КАСТИНГ
// id: 24378
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a, b, c;
    cin >> t >> n >> a >> b >> c;
    if (t == 1)
    {
        cout << max(0, n - (3 * n - a - b - c));
    }
    else
        cout << min(min(a, b), c);

    return 0;
}