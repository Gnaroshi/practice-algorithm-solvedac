// problem: 추론
// id: 1731
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, c, t;
    cin >> n >> a >> b >> c;
    if (n == 3)
        t = c;
    for (int i = 3; i < n; i++)
        cin >> t;
    if (a + c == 2 * b)
        cout << t + (b - a);
    else
        cout << b / a * t;

    return 0;
}