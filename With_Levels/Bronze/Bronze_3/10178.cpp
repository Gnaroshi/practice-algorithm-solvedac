// problem: 할로윈의 사탕
// id: 10178
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int c, v;
        cin >> c >> v;
        cout << "You get " << (c - c % v) / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }

    return 0;
}