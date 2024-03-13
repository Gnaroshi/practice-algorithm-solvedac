// problem: Tabliczka
// id: 8674
// time taken:

#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0)
        cout << 0;
    else
        cout << min(a, b);

    return 0;
}