// problem: Konik polny 2
// id: 8668
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, s;
    cin >> x >> s;
    if (2 * s > x)
        cout << "TAK";
    else
        cout << "NIE";

    return 0;
}