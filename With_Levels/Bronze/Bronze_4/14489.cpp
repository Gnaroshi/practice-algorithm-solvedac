#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 2 * c)
        cout << a + b - 2 * c << '\n';
    else
        cout << a + b << '\n';

    return 0;
}