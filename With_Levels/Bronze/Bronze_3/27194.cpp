// problem: Meeting Near the Fountain
// id: 27194
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, m, x, y;
    cin >> n >> t >> m >> x >> y;
    t *= 60;
    if (m * y + x * (n - m) <= x * y * t)
        cout << 0;
    else
    {
        int temp = m * y + x * (n - m) - x * y * t;
        if (temp % (x * y * 60) == 0)
            cout << temp / x / y / 60;
        else
            cout << temp / x / y / 60 + 1;
    }

    return 0;
}