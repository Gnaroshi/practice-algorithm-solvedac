// problem: 컵라면 측정하기
// id: 16479
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double k, d1, d2;
    cin >> k >> d1 >> d2;
    d2 -= d1;
    d2 /= 2.0;
    cout << fixed;
    cout.precision(7);
    cout << (k * k - d2 * d2);

    return 0;
}