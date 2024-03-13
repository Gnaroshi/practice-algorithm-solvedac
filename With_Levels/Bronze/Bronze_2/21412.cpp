// problem: Дробь
// id: 21412
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(int a, int b)
{
    if (!a)
        return b;
    return fn(b % a, a);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter;
    cin >> n;
    iter = n / 2;
    for (int i = iter; i >= 1; i--)
    {
        if (fn(i, n - i) == 1)
        {
            cout << i << ' ' << n - i;
            return 0;
        }
    }

    return 0;
}