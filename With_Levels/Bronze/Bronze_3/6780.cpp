// problem: Sumac Sequences
// id: 6780
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 2;
    int a, b, t;
    cin >> a >> b;
    while (true)
    {
        t = a - b;
        if (t < 0)
            break;
        a = b;
        b = t;
        ans++;
    }
    cout << ans;

    return 0;
}
