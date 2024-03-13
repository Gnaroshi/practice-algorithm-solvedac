// problem: 다트
// id: 2756
// time taken:
#include <bits/stdc++.h>
using namespace std;

int sc(double x, double y)
{
    double d = sqrt(x * x + y * y);
    for (int i = 100, j = 3; i >= 0; i -= 20, j += 3)
    {
        if (d <= j)
        {
            return i;
        }
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        a = b = 0;
        double t, x, y;
        for (int i = 0; i < 3; i++)
        {
            cin >> x >> y;
            a += sc(x, y);
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> x >> y;
            b += sc(x, y);
        }
        cout << "SCORE: " << a << " to " << b << ", ";
        if (a > b)
            cout << "PLAYER 1 WINS.\n";
        else if (a < b)
            cout << "PLAYER 2 WINS.\n";
        else
            cout << "TIE.\n";
    }

    return 0;
}