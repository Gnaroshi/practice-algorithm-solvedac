// problem: A Serious Reading Problem
// id: 11368
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long c, w, l, p, t = 1, m;
    while (true)
    {
        cin >> c >> w >> l >> p;
        if (c + w + l + p == 0)
            break;
        t = 1;
        m = w * l * p;
        for (int i = 0; i < m; i++)
            t *= c;
        cout << t << '\n';
    }

    return 0;
}