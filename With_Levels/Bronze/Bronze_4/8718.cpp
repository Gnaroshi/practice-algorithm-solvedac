#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, k;
    cin >> x >> k;
    x *= 1000;
    k *= 1000;
    if (k + k * 2 + k * 4 <= x)
        cout << k + k * 2 + k * 4;
    else if (k / 2 + k + k * 2 <= x)
        cout << k / 2 + k + k * 2;
    else if (k / 4 + k / 2 + k <= x)
        cout << k / 4 + k / 2 + k;
    else
        cout << 0;

    return 0;
}