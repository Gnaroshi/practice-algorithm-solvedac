// problem: Pencils from the 19th Century
// id: 4486
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cse = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        bool fnd = false;
        int ia, ib, ic;
        ia = n / 4;
        cout << "Case " << cse++ << ":\n";
        cout << n << " pencils for " << n << " cents\n";
        for (int a = 1; a <= ia; a++)
        {
            ib = n * 100 - a * 400;
            for (int b = 1; b <= ib; b++)
            {
                ic = n * 100 - a * 400 - b * 50;
                for (int c = 1; c <= ic; c++)
                {
                    if (a + b + c == n && a * 400 + b * 50 + c * 25 == n * 100)
                    {
                        fnd = true;
                        cout << a << " at four cents each\n";
                        cout << b << " at two for a penny\n";
                        cout << c << " at four for a penny\n\n";
                    }
                }
            }
        }

        if (!fnd)
            cout << "No solution found.\n\n";
    }

    return 0;
}