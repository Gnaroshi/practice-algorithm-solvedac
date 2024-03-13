// problem: Perfection
// id: 6491
// time taken:
#include <bits/stdc++.h>
using namespace std;

int solv(int n)
{
    int t = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i != n)
        {
            if (n % i == 0)
            {
                t += i;
                if (n / i != i && n / i != n)
                {
                    t += n / i;
                }
            }
        }
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << n << ' ';
        int s = solv(n);
        if (n == s)
            cout << "PERFECT\n";
        else if (n < s)
            cout << "ABUNDANT\n";
        else
            cout << "DEFICIENT\n";
    }

    return 0;
}