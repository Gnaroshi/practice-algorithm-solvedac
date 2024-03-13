// problem: XORXORXOR
// id: 12833
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < c % 2; i++)
    {
        a ^= b;
    }
    cout << a;

    return 0;
}