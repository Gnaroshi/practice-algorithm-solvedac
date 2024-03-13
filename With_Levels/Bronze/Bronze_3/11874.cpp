// problem: ZAMKA
// id: 11874
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cd(int n)
{
    string s = to_string(n);
    return s.length();
}

int ds(int n)
{
    int tl, ti, ret = 0;
    ti = n;
    tl = cd(n);

    while (ti > 0)
    {
        ret += ti % 10;
        ti /= 10;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, d, x, t;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++)
    {
        t = ds(i);
        if (t == x)
        {
            cout << i << '\n';
            break;
        }
    }

    for (int i = d; i >= l; i--)
    {
        t = ds(i);
        if (t == x)
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}