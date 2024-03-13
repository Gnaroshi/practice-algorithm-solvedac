// problem: Heavy Numbers
// id: 25814
// time taken:
#include <bits/stdc++.h>
using namespace std;

int solv(int n)
{
    int t, d, wn = 0;
    t = n;
    d = 0;
    while (t > 0)
    {
        wn += t % 10;
        t /= 10;
        d++;
    }
    wn *= d;
    return wn;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b;

    int wa = solv(a);
    int wb = solv(b);
    if (wa > wb)
        cout << 1;
    else if (wa < wb)
        cout << 2;
    else
        cout << 0;
    return 0;
}