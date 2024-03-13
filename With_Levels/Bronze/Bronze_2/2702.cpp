// problem: 초6 수학
// id: 2702
// time taken:
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
            swap(a, b);
        cout << a * b / (gcd(a, b)) << ' ' << gcd(a, b) << '\n';
    }

    return 0;
}