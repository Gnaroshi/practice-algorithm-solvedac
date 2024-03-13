// problem: Deficient, Perfect, and Abundant
// id: 6975
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ds(int n)
{
    int ret = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ret += i;
            if (i != n / i)
                ret += n / i;
        }
    }
    return ret - n;
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
        int t = ds(n);
        cout << n << " is ";
        if (n == t)
            cout << "a perfect number.\n";
        else if (n < t)
            cout << "an abundant number.\n";
        else
            cout << "a deficient number.\n";
        if (tc != 0)
            cout << '\n';
    }

    return 0;
}