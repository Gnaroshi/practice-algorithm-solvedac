// problem: Range
// id: 4826
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, ta, tb, ba, bb;
    while (true)
    {
        cin >> a >> b;
        if (a + b < 0)
            break;
        ta = 0, tb = 0;
        ba = a, bb = b;
        while (true)
        {
            cin >> a >> b;
            if (a + b <= 0.0000001)
                break;
            if (b <= bb)
            {
                ta += a - ba;
                tb += b - bb;
            }
            ba = a, bb = b;
        }
        cout << round(-ta / tb * bb) << '\n';
    }

    return 0;
}