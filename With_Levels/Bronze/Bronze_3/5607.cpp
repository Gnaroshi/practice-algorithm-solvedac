// problem: 問題 １
// id: 5607
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    a = b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            a += x + y;
        else if (x < y)
            b += x + y;
        else
        {
            a += x;
            b += y;
        }
    }
    cout << a << ' ' << b << '\n';

    return 0;
}