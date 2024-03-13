// problem: Кастинг
// id: 21529
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
        cout << max((a + b + c - 2 * n), 0);
    else
        cout << min(a, min(b, c));

    return 0;
}