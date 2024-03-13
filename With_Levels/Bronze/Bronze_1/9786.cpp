// problem: Common Fraction
// id: 9786
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, g;
        cin >> a >> b;
        g = __gcd(a, b);
        cout << a / g << ' ' << b / g << '\n';
    }

    return 0;
}