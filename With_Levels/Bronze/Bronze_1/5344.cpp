// problem: GCD
// id: 5344
// time taken:
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int t;
    if (a < b)
        swap(a, b);
    while (b > 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        cout << gcd(a, b) << '\n';
    }

    return 0;
}