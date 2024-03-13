#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll r, c, n;
    cin >> r >> c >> n;
    ll tempx, tempy;
    if (r % n != 0)
        tempx = r / n + 1;
    else
        tempx = r / n;
    if (c % n != 0)
        tempy = c / n + 1;
    else
        tempy = c / n;
    cout << tempx * tempy << '\n';

    return 0;
}