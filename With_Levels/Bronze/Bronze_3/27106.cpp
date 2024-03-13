// problem: Making Change
// id: 27106
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, a, b, c;
    cin >> p;
    p = 100 - p;
    a = (p - p % 25) / 25;
    p -= a * 25;
    b = (p - p % 10) / 10;
    p -= b * 10;
    c = (p - p % 5) / 5;
    p -= c * 5;
    cout << a << ' ' << b << ' ' << c << ' ' << p;
    return 0;
}