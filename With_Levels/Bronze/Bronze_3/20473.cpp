// problem: Гостиница
// id: 20473
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n;
    if (n % 3 == 1)
        b = n / 3 - 1;
    else
        b = n / 3;
    n -= b * 3;
    a = n / 2;
    cout << a << ' ' << b;

    return 0;
}