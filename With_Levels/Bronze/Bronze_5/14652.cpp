#include <bits/stdc++.h>
using namespace std;

int n, m, k;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    cout << (k / m) << ' ' << k % m << '\n';

    return 0;
}