// problem: Corona Virus Testing
// id: 25828
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, p, t;
    int tot, gd;
    cin >> g >> p >> t;
    tot = g * p;
    gd = p * t + g;
    if (tot == gd)
        cout << 0;
    else
        cout << (tot < gd ? 1 : 2);

    return 0;
}