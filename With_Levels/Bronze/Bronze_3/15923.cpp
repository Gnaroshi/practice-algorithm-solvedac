// problem: 욱제는 건축왕이야!!
// id: 15923
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int ans = 0;
    int a, b, ba, bb;
    int sa, sb;
    cin >> n >> ba >> bb;
    sa = ba;
    sb = bb;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        ans += abs(a - ba) + abs(b - bb);
        ba = a;
        bb = b;
    }
    ans += abs(sa - a) + abs(sb - b);
    cout << ans;

    return 0;
}