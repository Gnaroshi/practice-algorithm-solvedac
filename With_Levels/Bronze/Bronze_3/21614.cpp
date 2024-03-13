// problem: Secret Instructions
// id: 21614
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    bool dir = false;

    while (true)
    {
        cin >> n;
        if (n == 99999)
            break;
        t = (n / 1000) % 10 + n / 10000;
        if (t % 2 == 1)
            dir = false;
        else if (t % 2 == 0 && t != 0)
            dir = true;
        if (dir)
            cout << "right ";
        else
            cout << "left ";
        cout << n % 1000 << '\n';
    }

    return 0;
}