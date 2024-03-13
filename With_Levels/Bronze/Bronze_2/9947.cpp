// problem: Coin tossing
// id: 9947
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == b && a == "#")
            break;
        int n, t = 0;
        char ca, cb;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ca >> cb;
            if (ca == cb)
                t++;
        }
        cout << a << ' ' << t << ' ' << b << ' ' << n - t << '\n';
    }

    return 0;
}