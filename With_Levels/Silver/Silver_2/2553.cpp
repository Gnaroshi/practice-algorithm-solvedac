// problem: 마지막 팩토리얼 수
// id: 2553
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, c = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        c *= i;
        c %= 100000000;
        while (c % 10 == 0)
            c /= 10;
    }
    cout << c % 10 << '\n';

    return 0;
}