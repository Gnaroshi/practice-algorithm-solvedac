// problem: ЧАСОВНИК
// id: 24356
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t1, m1, t2, m2, t, m;
    cin >> t1 >> m1 >> t2 >> m2;
    t = t2 - t1;
    m = m2 - m1;
    if (m < 0)
    {
        t -= 1;
        m += 60;
    }
    if (t < 0)
        t += 24;
    m += t * 60;
    cout << m << ' ' << m / 30;

    return 0;
}