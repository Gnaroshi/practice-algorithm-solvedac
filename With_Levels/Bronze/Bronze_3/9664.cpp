// problem: NASLJEDSTVO
// id: 9664
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, o, t, a;
    cin >> n >> o;
    t = o / (n - 1);
    a = t * (n - 1);
    if (o == a)
        cout << o + t - 1 << ' ' << o + t;
    else
        cout << o + t << ' ' << o + t;

    return 0;
}