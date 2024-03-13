// problem: Дневнегреческая машина
// id: 28797
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;
    cout << fixed;
    cout.precision(7);
    cout << 100.0 * (min(a, (a + 2.0) / 3.0));

    return 0;
}