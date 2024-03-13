// problem: Koncert
// id: 7947
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
        int a, bb, c;
        int r, g, b;
        r = g = b = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> a >> bb >> c;
            r += a;
            g += bb;
            b += c;
        }
        if (r % 10 >= 5)
            r += 10;
        if (g % 10 >= 5)
            g += 10;
        if (b % 10 >= 5)
            b += 10;

        cout << r / 10 << ' ' << g / 10 << ' ' << b / 10 << '\n';
    }

    return 0;
}