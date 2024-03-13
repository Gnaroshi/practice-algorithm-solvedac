// problem: Academic Distance
// id: 23103
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int ba, bb;
    cin >> ba >> bb;
    int ans = 0;
    tc--;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        ans += abs(a - ba) + abs(b - bb);
        ba = a;
        bb = b;
    }
    cout << ans;

    return 0;
}