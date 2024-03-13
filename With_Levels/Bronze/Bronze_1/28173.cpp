// problem: Another Goose Goose Duck Problem
// id: 28173
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r, b, k;
    cin >> l >> r >> b >> k;
    cout << ((l + b - 1) / b) * b * k;

    return 0;
}