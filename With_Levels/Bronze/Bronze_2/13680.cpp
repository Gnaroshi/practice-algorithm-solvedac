// problem: Dama
// id: 13680
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    while (true)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 0)
            break;
        int cnt = 0;
        if (a == c && b == d)
            cnt = 0;
        else if (a == c || b == d)
            cnt = 1;
        else if (abs(a - c) == abs(b - d))
            cnt = 1;
        else
            cnt = 2;
        cout << cnt << '\n';
    }

    return 0;
}