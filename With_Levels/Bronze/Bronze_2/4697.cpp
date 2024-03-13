// problem: Fifty Coats of Gray
// id: 4697
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, l, h, ar, m, a, b;
    while (true)
    {
        cin >> n >> w >> l >> h >> ar >> m;
        if (n + w + l + h + ar + m == 0)
            break;
        int ans = 0, t = n * (w * l + 2 * l * h + 2 * h * w);
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            t -= n * a * b;
        }
        cout << (t + ar - 1) / ar << '\n';
    }

    return 0;
}