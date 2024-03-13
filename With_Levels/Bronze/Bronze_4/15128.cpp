// problem: Congruent Numbers
// id: 15128
// time taken:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if ((a1 * a2) % (b1 * b2 * 2) == 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}