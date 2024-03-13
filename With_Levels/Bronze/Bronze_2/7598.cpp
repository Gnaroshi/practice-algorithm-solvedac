// problem: Bookings
// id: 7598
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    char c;
    while (true)
    {
        cin >> s >> n;
        if (s == "#" && !n)
            break;
        int cur = n, t;
        while (true)
        {
            cin >> c >> t;
            if (c == 'X' && !t)
                break;
            if (c == 'B')
            {
                if (cur + t <= 68)
                    cur += t;
            }
            else
            {
                if (cur - t >= 0)
                    cur -= t;
            }
        }
        cout << s << ' ' << cur << '\n';
    }

    return 0;
}