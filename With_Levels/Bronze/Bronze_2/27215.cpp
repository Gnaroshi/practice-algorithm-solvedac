// problem: Непохожие числа
// id: 27215
// time taken:
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);
    int t;
    while (b)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

bool isp(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, l, r, iter;
    cin >> x >> l >> r;
    vector<int> ans;

    for (int i = l; i <= r; i++)
    {
        if (i != x)
        {
            if (isp(gcd(i, x)))
                ans.push_back(i);
        }
    }

    iter = ans.size();
    cout << iter << '\n';
    for (int i = 0; i < iter; i++)
    {
        cout << ans[i] << ((i != iter - 1) ? ' ' : '\n');
    }

    return 0;
}