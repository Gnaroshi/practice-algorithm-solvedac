// problem: Sarah's Toys
// id: 5102
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        a -= b;
        if (a <= 1)
            cout << 0 << ' ' << 0;
        else
        {
            if (a > 2 && a % 2 == 1)
                cout << (a - 3) / 2 << ' ' << 1;
            else
                cout << a / 2 << ' ' << 0;
        }
        cout << '\n';
    }

    return 0;
}