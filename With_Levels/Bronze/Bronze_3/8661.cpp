// problem: Stopki
// id: 8661
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, k, a;
    cin >> x >> k >> a;
    bool t = true;
    while (true)
    {
        if (t)
        {
            x -= k;
            if (x < 0)
            {
                cout << 1;
                break;
            }
        }
        else
        {
            x -= a;
            if (x < 0)
            {
                cout << 0;
                break;
            }
        }
        t = !t;
    }

    return 0;
}