// problem: Martian Volleyball
// id: 16255
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
        int k, x, y;
        cin >> k >> x >> y;
        cout << max(0, max(k - max(x, y), 2 + min(x, y) - max(x, y))) << '\n';
    }

    return 0;
}