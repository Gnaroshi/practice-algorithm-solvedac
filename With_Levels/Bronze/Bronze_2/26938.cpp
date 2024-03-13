// problem: Lamps
// id: 26938
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h, p, a, b;
    int d = 0, ah = 0;
    a = 5;
    b = 60;
    cin >> h >> p;
    while (true)
    {
        if (ah >= 1000)
        {
            a += 5;
            ah -= 1000;
        }
        ah += h;
        d++;
        a += 60 * h * p / 100000.0;
        b += 11 * h * p / 100000.0;
        if (a > b)
            break;
    }
    cout << d;

    return 0;
}