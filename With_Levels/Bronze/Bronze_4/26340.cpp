// problem: Fold the Paper Nicely
// id: 26340
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
        int a, b, c;
        cin >> a >> b >> c;
        cout << "Data set: " << a << ' ' << b << ' ' << c << '\n';

        // cout << a << ' ' << b << '\n';
        for (int i = 0; i < c; i++)
        {
            if (a > b)
                a /= 2;
            else
                b /= 2;
        }
        if (a < b)
            swap(a, b);
        cout << a << ' ' << b << "\n";
        if (tc != 0)
            cout << '\n';
    }

    return 0;
}