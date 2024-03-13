// problem: ГЛОНАСС
// id: 29679
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t, r, v;
    cin >> t >> r >> v;
    cout << fixed;
    cout.precision(7);
    cout << max(v - 2 * r / t, .0);

    return 0;
}