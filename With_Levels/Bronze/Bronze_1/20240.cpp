// problem: Integer Square
// id: 20240
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i * i <= n; i++)
    {
        for (int j = 1; j * j <= n; j++)
        {
            if (j * j == n)
            {
                cout << 0 << ' ' << 0 << '\n';
                cout << 0 << ' ' << j << '\n';
                cout << j << ' ' << 0 << '\n';
                cout << j << ' ' << j << '\n';
                return 0;
            }
            else if (j * j + i * i == n)
            {
                cout << 0 << ' ' << 0 << '\n';
                cout << j << ' ' << i << '\n';
                cout << -1 * i << ' ' << j << '\n';
                cout << -1 * (i - j) << ' ' << j + i << '\n';
                return 0;
            }
        }
    }
    cout << "Impossible";

    return 0;
}