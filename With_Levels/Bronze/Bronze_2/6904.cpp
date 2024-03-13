// problem: Picture Perfect
// id: 6904
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    while (true)
    {
        cin >> c;
        if (!c)
            break;
        int a = 1, b = 1, mn = 0x3f3f3f3f, la, lb;
        while (true)
        {
            if (a * b > c)
                break;
            while (true)
            {
                if (a * b > c)
                    break;
                if (a * b == c)
                {
                    mn = min(mn, (a + b) * 2);
                    la = a;
                    lb = b;
                }
                b++;
            }
            a++;
            b = a;
        }
        cout << "Minimum perimeter is " << (la + lb) * 2 << " with dimensions " << la << " x " << lb << "\n";
    }

    return 0;
}