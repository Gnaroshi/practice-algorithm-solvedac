// problem: 水道料金 (Water Rate)
// id: 10707
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;
    if (p <= c)
        cout << min(b, a * p);
    else
        cout << min(b + (p - c) * d, a * p);

    return 0;
}
