// problem: Cabin Baggage
// id: 9622
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int cnt = 0;
    while (tc--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        if (((a <= 56 && b <= 45 && c <= 25) || a + b + c <= 125) && d <= 7)
        {
            cout << 1 << '\n';
            cnt++;
        }
        else
            cout << 0 << '\n';
    }
    cout << cnt;

    return 0;
}
