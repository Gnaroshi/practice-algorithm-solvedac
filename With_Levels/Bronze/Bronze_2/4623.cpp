// problem: Copier Reduction
// id: 4623
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    while (true)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 0)
            break;
        if (a < b)
            swap(a, b);
        if (c < d)
            swap(c, d);
        if (a <= c && b <= d)
        {
            cout << "100%\n";
            continue;
        }
        int ta = a, tb = b;
        a *= 100;
        b *= 100;
        c *= 100;
        d *= 100;
        for (int i = 1; i < 100; i++)
        {
            a -= ta;
            b -= tb;
            if (a <= c && b <= d)
            {
                cout << 100 - i << "%\n";
                break;
            }
        }
    }

    return 0;
}