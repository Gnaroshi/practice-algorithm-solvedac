// problem: Electric Bill
// id: 25881
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int f, s, n, u, uu;
    cin >> f >> s >> n;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        cin >> u;
        uu = u;
        if (u >= 1000)
        {
            t += f * 1000;
            u -= 1000;
        }
        else
        {
            t += u * f;
            u -= u;
        }
        t += u * s;
        cout << uu << ' ' << t << '\n';
    }

    return 0;
}