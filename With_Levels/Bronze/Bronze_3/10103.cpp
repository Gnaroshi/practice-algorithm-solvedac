// problem: 주사위 게임
// id: 10103
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n;
    a = b = 100;
    for (int i = 0; i < n; i++)
    {
        int t, c;
        cin >> t >> c;
        if (t > c)
            b -= t;
        else if (t < c)
            a -= c;
    }
    cout << a << '\n'
         << b;

    return 0;
}