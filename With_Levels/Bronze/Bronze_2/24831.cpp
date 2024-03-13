// problem: Two Rabbits
// id: 24831
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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if ((y - x) % (a + b) == 0)
            cout << (y - x) / (a + b) << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}