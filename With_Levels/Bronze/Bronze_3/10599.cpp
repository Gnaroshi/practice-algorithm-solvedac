// problem: 페르시아의 왕들
// id: 10599
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
        if (!a && !b && !c && !d)
            break;
        cout << c - b << ' ' << d - a << '\n';
    }

    return 0;
}