#include <bits/stdc++.h>
using namespace std;

int m, n, x, y;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    vector<int> v;
    while (tc--)
    {
        cin >> m >> n >> x >> y;

        if (x == m)
            x = 0;
        if (y == n)
            y = 0;
        // iter max = 1600000001
        int iter = lcm(m, n);
        bool isFound = false;
        for (int i = x; i <= iter; i += m)
        {
            if (i != 0)
                if (i % n == y)
                {
                    v.push_back(i);
                    isFound = true;
                    break;
                }
        }
        if (!isFound)
            v.push_back(-1);
    }

    for (auto i : v)
        cout << i << '\n';

    return 0;
}