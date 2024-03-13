// problem: 비숍 투어
// id: 23885
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, c, d;
    cin >> n >> m >> a >> b >> c >> d;
    if (n == 1 || m == 1)
        cout << ((n == m || (a == c && b == d)) ? "YES" : "NO");
    else
        cout << (((a + b) % 2 == (c + d) % 2) ? "YES" : "NO");

    return 0;
}