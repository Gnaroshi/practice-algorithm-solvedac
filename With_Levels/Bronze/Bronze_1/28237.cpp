// problem: 수학 선생님의 고민(Easy)
// id: 28237
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, d, sd;
    cin >> n;
    a = n, b = n + 1, c = (n + 2) * -1;
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << -1;
        return 0;
    }
    sd = sqrt(d);
    if (sd * sd != d)
    {
        cout << -1;
        return 0;
    }

    // nx^2 + (n+1)x - (n+2)
    // d = b^2 - 4ac
    // nx^2 + (n+1)x - (n+2) = n(x-p)(x-q)
    // p*p', q*q'
    // -p,-q = (-b(+-)sqrt(b*b-4ac))/2a
    // p' = 2a/(gcd(b-sd, 2a))
    // n % p'q' == 0
    a *= 2;
    int p = sd - b, q = (sd + b) * -1;
    int t1 = __gcd(p, a), t2 = __gcd(q, a);
    p /= t1, q /= t2;
    int pt = a / t1, qt = a / t2;
    if (n % (pt * qt) == 0)
    {
        cout << pt << ' ' << p * -1 << ' ' << n / pt << ' ';
        cout << q * n / qt / pt * -1 << '\n';
    }
    else
        cout << -1;

    return 0;
}
// 음수 gcd