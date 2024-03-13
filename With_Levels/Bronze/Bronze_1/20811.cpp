// problem: Öar
// id: 20811
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, a = 0, b = 1, t;
    cin >> n;
    while (n > 0)
    {
        n -= b;
        t = b;
        b += a;
        a = t;
        cnt++;
    }
    cout << cnt;

    return 0;
}