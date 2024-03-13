// problem: アイスクリーム (Ice Cream)
// id: 24087
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, a, b;
    cin >> s >> a >> b;
    if (s <= a)
        cout << 250;
    else
    {
        int ans = 250;
        while (true)
        {
            a += b;
            ans += 100;
            if (a >= s)
                break;
        }
        cout << ans;
    }

    return 0;
}