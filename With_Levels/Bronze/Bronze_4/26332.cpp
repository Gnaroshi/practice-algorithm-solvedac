// problem: Buying in Bulk
// id: 26332
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
        int c, p;
        cin >> c >> p;
        cout << c << ' ' << p << '\n';
        cout << c * p - (c - 1) * 2 << '\n';
    }

    return 0;
}