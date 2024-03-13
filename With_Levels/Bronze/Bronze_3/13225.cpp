// problem: Divisors
// id: 13225
// time taken:
#include <bits/stdc++.h>
using namespace std;

int solv(int n)
{
    int ret = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret++;
            if (i != n / i)
                ret++;
        }
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << n << ' ' << solv(n) << '\n';
    }

    return 0;
}