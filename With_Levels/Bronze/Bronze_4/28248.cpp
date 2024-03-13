// problem: Deliv-e-droid
// id: 28248
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, c;
    cin >> p >> c;
    cout << ((p > c ? 500 : 0) + 50 * p - 10 * c);

    return 0;
}