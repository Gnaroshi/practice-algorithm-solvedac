// problem: 푸앙이와 종윤이
// id: 25591
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int a, b, c, d, q, r;
    a = 100 - x;
    b = 100 - y;
    c = 100 - a - b;
    d = a * b;
    q = (d - d % 100) / 100;
    r = d % 100;
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
    cout << c + q << ' ' << r;

    return 0;
}