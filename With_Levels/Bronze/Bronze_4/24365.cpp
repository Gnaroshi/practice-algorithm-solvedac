// problem: ПЧЕЛИЧКАТА МАЯ
// id: 24365
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, m;
    cin >> a >> b >> c;
    m = (a + b + c) / 3;
    cout << abs(m - a) + (c - ((b - (m - a)) + c) / 2);

    return 0;
}