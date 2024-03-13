// problem: Acres
// id: 26532
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    if (a * b % 4840 != 0)
        cout << a * b / 4840 / 5 + 1;
    else
        cout << a * b / 4840 / 5;

    return 0;
}