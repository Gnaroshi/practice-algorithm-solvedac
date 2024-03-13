// problem: Undercut
// id: 9865
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Game " << tcc << ": ";
        int m, t = 0, d = 0, a, b;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            if (abs(a - b) == 1)
            {
                if (a > b)
                {
                    if (a == 2)
                        d += 6;
                    else
                        d += a + b;
                }
                else
                {
                    if (b == 2)
                        t += 6;
                    else
                        t += a + b;
                }
            }
            else if (a > b)
                t += a;
            else if (b > a)
                d += b;
        }
        cout << "Tessa " << t << " Danny " << d << "\n";
    }

    return 0;
}