// problem: Ljeto
// id: 23401
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, a, b, pa = 0, pb = 0;
    int ts[9];
    fill(ts, ts + 9, -1000);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> a >> b;
        if (a <= 4 && b >= 5)
        {
            pa += 100;
            if (t - ts[a] <= 10)
                pa += 50;
            ts[a] = t;
        }
        else if (a >= 5 && b <= 4)
        {
            pb += 100;
            if (t - ts[a] <= 10)
                pb += 50;
            ts[a] = t;
        }
    }
    cout << pa << ' ' << pb;

    return 0;
}