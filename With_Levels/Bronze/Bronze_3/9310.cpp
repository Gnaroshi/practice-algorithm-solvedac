// problem: Arithmetic and Geometric Sums
// id: 9310
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        long long a, b, c, ret;
        cin >> a >> b >> c;
        if (c - b == b - a)
            ret = n * (2 * a + (n - 1) * (b - a)) / 2;
        else
            ret = a * (pow(b / a, n) - 1) / (b / a - 1);
        cout << ret << '\n';
    }

    return 0;
}