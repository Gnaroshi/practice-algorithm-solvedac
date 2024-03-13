// problem: 완전수
// id: 14563
// time taken:
#include <bits/stdc++.h>

int solv(int n)
{
    int t = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && i != n)
        {
            t += i;
            if (n / i != n && n / i != i)
                t += n / i;
        }
    }
    return t;
}

using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n;
        s = solv(n);
        if (s == n)
            cout << "Perfect\n";
        else if (s < n)
            cout << "Deficient\n";
        else
            cout << "Abundant\n";
    }

    return 0;
}