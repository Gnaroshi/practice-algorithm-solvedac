// problem: Pokemon Buddy
// id: 18691
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
        int g, c, e;
        cin >> g >> c >> e;
        int ans = 0;
        e -= c;
        if (e <= 0)
            cout << 0;
        else
        {
            if (g == 1)
                cout << e;
            else if (g == 2)
                cout << e * 3;
            else
                cout << e * 5;
        }
        cout << '\n';
    }

    return 0;
}