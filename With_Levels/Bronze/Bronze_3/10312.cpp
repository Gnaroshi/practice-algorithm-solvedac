// problem: Lodê
// id: 10312
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int k, t, iter = 1, a, b, c = 0;
        cin >> k;
        t = 15;
        while (t--)
            iter *= 3;
        for (int i = iter; i > 0; i /= 3)
        {
            a = k / i;
            b = k % i;
            if (a != 0)
                c = 1;
            k = b;
            if (c)
            {
                cout << a << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}