// problem: The Battle of Giants
// id: 23854
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, aw, bw, dr;
    aw = dr = bw = 0;
    cin >> a >> b;

    aw = a / 3;
    bw = b / 3;
    a -= aw * 3;
    b -= bw * 3;
    if (a == b)
    {
        dr = a;
        cout << aw << ' ' << dr << ' ' << bw;
    }
    else
        cout << -1;

    return 0;
}