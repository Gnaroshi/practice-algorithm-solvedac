// problem: Förvirrad föreläsare
// id: 21280
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, bef = 0, e = 0, f = 0;
    cin >> n;
    cin >> bef;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t >= bef)
            f += t - bef;
        else if (t <= bef)
            e += bef - t;
        bef = t;
    }
    cout << e << ' ' << f;

    return 0;
}
