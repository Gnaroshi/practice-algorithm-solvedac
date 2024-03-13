// problem: Ship Selection
// id: 10180
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
        int ans = 0;
        int n;
        double d;
        cin >> n >> d;
        for (int i = 0; i < n; i++)
        {
            double v, f, c;
            cin >> v >> f >> c;
            if (f / c * v >= d)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}
