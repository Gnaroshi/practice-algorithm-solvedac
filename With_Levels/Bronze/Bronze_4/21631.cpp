// problem: Checkers
// id: 21631
// time taken:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    if (a >= b)
        cout << b;
    else
        cout << a + 1;
    return 0;
}