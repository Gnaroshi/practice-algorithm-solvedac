// problem: Runway Planning
// id: 10286
// tag:
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
        double t;
        cin >> t;
        int ans = (int(round((t + 0.1) / 10)) + 17) % 18 + 1;
        if (ans < 10)
            cout << 0;
        cout << ans << "\n";
    }
    return 0;
}