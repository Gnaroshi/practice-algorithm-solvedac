// problem: Ampelmännchen
// id: 11434
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
        cout << "Data Set " << i << ":\n";
        int n, w, e, a, b, c, d, s = 0;
        cin >> n >> w >> e;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> c >> d;
            s += max(a * w + c * e, b * w + e * d);
        }
        cout << s << '\n';
        if (i != tc)
            cout << '\n';
    }

    return 0;
}