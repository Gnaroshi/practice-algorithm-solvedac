// problem: Игра
// id: 22151
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, m, xs, ys, xf, yf;
    cin >> tc;
    while (tc--)
    {
        cin >> m >> xs >> ys >> xf >> yf;
        if (abs(xf - xs) + abs(yf - ys) <= m)
            cout << "First 1\n";
        else
            cout << "Infinity\n";
    }

    return 0;
}